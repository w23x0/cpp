#include <iostream>
#include <windows.h>
#include <climits>
using namespace std;


int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);       


    //基数base：二进制、八进制、十进制、十六进制
    //位权weighit：每一位数字所代表的值

    //十进制转二进制
    long long n,b;
    cout<<"请输入一个十进制整数：";
    cin >> n;
    bool k = false;
    for (int i=100;i>0;i--){
        b=n;
         for (int j = 1; j < i; j++) {
            b = b / 2;
        }
        if (b % 2 == 1) {
            k = true; 
        }
        if (k == true) {
            cout << b % 2; 
        }
    }
    cout << endl;







    return 0;
}