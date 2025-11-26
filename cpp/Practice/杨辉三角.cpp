#include <iostream>
#include <vector>
#include <iomanip> // 用于 setw 对齐

using namespace std;

// 设置每个数字占用的宽度
// 如果你要打印很大的数字，或者觉得太挤，把这个数字改大（比如 8 或 10）
const int WIDTH = 6; 

void printPascalsTriangle(int n) {
    if (n <= 0) return;

    vector<vector<long long>> triangle(n);

    for (int i = 0; i < n; i++) {
        triangle[i].resize(i + 1);
        triangle[i][0] = triangle[i][i] = 1;

        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }

    // 输出部分
    for (int i = 0; i < n; i++) {
        // 1. 打印行首空格（保持 int 即可，因为 n 是 int）
        int indent = (n - 1 - i) * (WIDTH / 2);
        for (int k = 0; k < indent; k++) {
            cout << " "; 
        }

        // 2. 打印数字 【修改了这里】
        // 将 int j 改为 size_t j，或者使用 auto j (C++11)
        // 这样 j 和 triangle[i].size() 就都是无符号类型，警告消失
        for (size_t j = 0; j < triangle[i].size(); j++) {
            cout << setw(WIDTH) << triangle[i][j];
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "请输入杨辉三角的行数: ";
    if (cin >> n) {
        cout << endl;
        printPascalsTriangle(n);
    }
    return 0;
}