#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);       
    
    cout <<"输入i:"<<"输入j:"<<"输入整除数n:"<<endl;
    int i, j, n;
    cin >> i >> j >> n;
    int sum = 0;
    for (int k = i; k <= j; k++) {
        if (k % n == 0) {
            sum += k;
        }
    }
    cout << "sum=" << sum << endl;
}