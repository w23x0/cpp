#include <iostream>
#include <bitset>
using namespace std;

int main(){
    cout<<"位运算符示例："<<endl;
    cout<<"输入a1,b进行位运算"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<bitset<8> (a)<< endl;
    cout<<bitset<8> (b)<< endl;

    // 位运算符（Bitwise Operators）
    // 位与 (AND) & 位或 (OR) | 位异或 (XOR) ^ 位非 (NOT) ~ 左移 (Left Shift) << 右移 (Right Shift) >>
    cout << "位与and运算结果: " << endl<<bitset<8> (a & b) << endl;  // 位与运算（0除外外全为1才为1）
    cout << "位或or运算结果: " << endl<<bitset<8> (a | b) << endl;  // 位或运算
    cout << "位异或xor运算结果: " << endl<<bitset<8> (a ^ b) << endl;  // 位异或运算
    cout << "位非not a运算结果: " << endl<<bitset<8> (~a) << endl;     // 位非运算
    cout << "位非not b运算结果: " << endl<<bitset<8> (~b) << endl;     // 位非运算
    cout << "a左移运算结果: " << endl<<"********"<< endl<<bitset<16> (a << 1) << endl; // 左移运算（溢出高位丢失，低位补0）
    cout << "a右移运算结果: " << endl<<"********"<< endl<<bitset<16> (a >> 1) << endl; // 右移运算(除2向负无穷取整，精度丢失）
    cout << "b左移运算结果: " << endl<<"********"<< endl<<bitset<16> (b << 1) << endl; // 左移运算（溢出高位丢失，低位补0）
    cout << "b右移运算结果: " << endl<<"********"<< endl<<bitset<16> (b >> 1) << endl; // 右移运算(除2向负无穷取整，精度丢失）

    // 运算符优先级 (Operator Precedence)
    //最高级：括号 () —— 永远是你的救命稻草
    // 一元运算符：!, ~, ++, --  只作用于一个变量的符号
    // 算术运算符：*, /, % 高于 +, -
    // 位移运算符：<<, >>
    // 比较运算符：<, >, ==, !=
    // 位逻辑运算符：& > ^ > |（注意：它们比加减法低，但比 && 高）
    // 逻辑运算符：&& > ||
    // 最低级：赋值运算符 =

    // 结合性 (Associativity)
    // 当一排运算符的优先级一样时，看结合性
    // 左结合（大多数）：从左往右算。例如 a - b + c 等同于 (a - b) + c
    // 右结合（赋值运算）：从右往左算。例如 a = b = 5 等同于 a = (b = 5)

    // 作用域 局部作用域 (Local Scope) 全局作用域 (Global Scope)
    // 作用域冲突（遮蔽效应）: 局部变量会遮蔽全局变量

    // 数据类型修饰符 (Data Type Modifiers) int 4/ long / long long 8/ short 2/ float 4/ double 8/ char 1/ bool 1 
    // 修饰符 用于改变基本数据类型的属性
    // signed 有符号 和 unsigned 无符号: 控制整数的符号位

    // sizeof() 运算符: 用于获取数据类型或变量所占的字节数
    long long c;
    cout<<"输入c: ";
    cin>>c;
    cout<<"sizeof(c): "<<sizeof(c)<<endl;



    // C++ 标准只要求： sizeof(short) <= sizeof(int) <= sizeof(long) <= sizeof(long long)
    // 在 32 位系统或 Windows 64 位系统上：long 通常确实只有 4 字节。在这种情况下，它和 int 是一模一样的
    // 在 Linux 或 macOS 64 位系统上：long 通常是 8 字节



    // 作业 判断2的幂
    int num;
    cout<<"输入num: ";
    cin>>num;
    // 法一
    for (int i=0;i<=30;i++){
        if (num==(1<<i)){
            cout<<num<<"是2的"<<i<<"次幂"<<endl;
            break;
        }
        if (i==30){
            cout<<num<<"不是2的幂"<<endl;
        }
    }

    // 法二
    if (num>0 && (num & (num - 1)) == 0) {
        cout << num << "是2的幂" << endl;
    } else {
        cout << num << "不是2的幂" << endl;
    }

    // 整数反转
    int num1 = 125;
    int ans = 0;

    while (num1 != 0) {
    int digit = num1 % 10;      // 拿到最后一位
    ans = ans * 10 + digit;    // 把之前的数进一位，加上新的末尾
    num1 = num1 / 10;            // 砍掉原数的最后一位
    }
    cout << "反转后的结果: " << ans << endl;

    return 0;
}
