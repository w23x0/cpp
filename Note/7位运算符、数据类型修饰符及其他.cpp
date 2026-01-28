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

    cout << "位与and运算结果: " << endl<<bitset<8> (a & b) << endl;  // 位与运算（0除外外全为1才为1）
    cout << "位或or运算结果: " << endl<<bitset<8> (a | b) << endl;  // 位或运算
    cout << "位异或xor运算结果: " << endl<<bitset<8> (a ^ b) << endl;  // 位异或运算
    cout << "位非not a运算结果: " << endl<<bitset<8> (~a) << endl;     // 位非运算
    cout << "位非not b运算结果: " << endl<<bitset<8> (~b) << endl;     // 位非运算
    cout << "a左移运算结果: " << endl<<bitset<16> (a << 1) << endl; // 左移运算（溢出高位丢失，低位补0）
    cout << "a右移运算结果: " << endl<<bitset<16> (a >> 1) << endl; // 右移运算(除2向负无穷取整，精度丢失）
    cout << "b左移运算结果: " << endl<<bitset<16> (b << 1) << endl; // 左移运算（溢出高位丢失，低位补0）
    cout << "b右移运算结果: " << endl<<bitset<16> (b >> 1) << endl; // 右移运算(除2向负无穷取整，精度丢失）

    





    
    return 0;
}
