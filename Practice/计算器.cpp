#include <iostream>
#include <sstream>
#include <stack>
#include <vector>
#include <map>
#include <cmath>
#include <cctype>

using namespace std;

// ===================== Tokenizer =====================

enum TokenType { NUMBER, OPERATOR, FUNCTION, PAREN_LEFT, PAREN_RIGHT };

struct Token {
    TokenType type;
    string value;
};

bool isFunction(const string& s) {
    static vector<string> funcs = {
        "sin","cos","tan","log","ln","sqrt","abs","exp"
    };
    for (auto& f : funcs)
        if (s == f) return true;
    return false;
}

vector<Token> tokenize(const string& expr) {
    vector<Token> tokens;
    string num, name;

    for (size_t i = 0; i < expr.size(); ++i) {
        char c = expr[i];

        if (isspace(c)) continue;

        if (isdigit(c) || c == '.') {
            num += c;
            while (i + 1 < expr.size() && (isdigit(expr[i+1]) || expr[i+1] == '.'))
                num += expr[++i];
            tokens.push_back({NUMBER, num});
            num.clear();
        }
        else if (isalpha(c)) {
            name += c;
            while (i + 1 < expr.size() && isalpha(expr[i+1]))
                name += expr[++i];
            if (isFunction(name))
                tokens.push_back({FUNCTION, name});
            else
                throw runtime_error("未知函数: " + name);
            name.clear();
        }
        else if (c == '(') {
            tokens.push_back({PAREN_LEFT, "("});
        }
        else if (c == ')') {
            tokens.push_back({PAREN_RIGHT, ")"});
        }
        else { // operator
            tokens.push_back({OPERATOR, string(1, c)});
        }
    }

    return tokens;
}

// ===================== Shunting Yard =====================

map<string, int> precedence = {
    {"+", 1}, {"-", 1},
    {"*", 2}, {"/", 2},
    {"^", 3}
};

map<string, bool> rightAssociative = {
    {"^", true}
};

vector<Token> toRPN(const vector<Token>& tokens) {
    vector<Token> output;
    stack<Token> opstack;

    for (auto& t : tokens) {
        if (t.type == NUMBER)
            output.push_back(t);

        else if (t.type == FUNCTION)
            opstack.push(t);

        else if (t.type == OPERATOR) {
            while (!opstack.empty() &&
                   ((opstack.top().type == OPERATOR &&
                       ((precedence[opstack.top().value] > precedence[t.value]) ||
                        (precedence[opstack.top().value] == precedence[t.value] &&
                         !rightAssociative[t.value])
                       ))
                    || opstack.top().type == FUNCTION)) {

                output.push_back(opstack.top());
                opstack.pop();
            }
            opstack.push(t);
        }

        else if (t.type == PAREN_LEFT) {
            opstack.push(t);
        }

        else if (t.type == PAREN_RIGHT) {
            while (!opstack.empty() && opstack.top().type != PAREN_LEFT) {
                output.push_back(opstack.top());
                opstack.pop();
            }
            if (opstack.empty())
                throw runtime_error("括号不匹配！");
            opstack.pop();
            if (!opstack.empty() && opstack.top().type == FUNCTION) {
                output.push_back(opstack.top());
                opstack.pop();
            }
        }
    }

    while (!opstack.empty()) {
        if (opstack.top().type == PAREN_LEFT)
            throw runtime_error("括号不匹配！");
        output.push_back(opstack.top());
        opstack.pop();
    }

    return output;
}

// ===================== RPN Evaluator =====================

double applyFunction(const string& f, double x) {
    if (f == "sin") return sin(x);
    if (f == "cos") return cos(x);
    if (f == "tan") return tan(x);
    if (f == "log") return log10(x);
    if (f == "ln") return log(x);
    if (f == "sqrt") return sqrt(x);
    if (f == "abs") return abs(x);
    if (f == "exp") return exp(x);
    throw runtime_error("未知函数：" + f);
}

double evaluateRPN(const vector<Token>& rpn) {
    stack<double> st;

    for (auto& t : rpn) {
        if (t.type == NUMBER) {
            st.push(stod(t.value));
        }
        else if (t.type == FUNCTION) {
            if (st.empty()) throw runtime_error("函数缺少参数");
            double x = st.top(); st.pop();
            st.push(applyFunction(t.value, x));
        }
        else if (t.type == OPERATOR) {
            if (st.size() < 2) throw runtime_error("表达式错误：操作数不足");

            double b = st.top(); st.pop();
            double a = st.top(); st.pop();

            if (t.value == "+") st.push(a + b);
            else if (t.value == "-") st.push(a - b);
            else if (t.value == "*") st.push(a * b);
            else if (t.value == "/") st.push(a / b);
            else if (t.value == "^") st.push(pow(a, b));
            else throw runtime_error("未知操作符: " + t.value);
        }
    }

    if (st.size() != 1)
        throw runtime_error("表达式错误");

    return st.top();
}

// ===================== Main =====================

int main() {
    cout << "===== 高级 C++ 表达式计算器 =====\n";
    cout << "支持函数、括号、幂运算等。\n\n";

    string expr;
    while (true) {
        cout << "\n请输入表达式（输入 exit 退出）：\n>> ";
        getline(cin, expr);

        if (expr == "exit") break;

        try {
            auto tokens = tokenize(expr);
            auto rpn = toRPN(tokens);
            double result = evaluateRPN(rpn);
            cout << "结果： " << result << endl;
        }
        catch (const exception& e) {
            cout << "错误：" << e.what() << endl;
        }
    }
    return 0;
}
