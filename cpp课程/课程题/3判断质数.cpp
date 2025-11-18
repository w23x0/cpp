//判断一个数是否为质数（Prime Number）
// 质数：只有 1 和它本身两个约数
// 判断方法：尝试用 2 ~ sqrt(n) 的数去除，如果能整除就不是质数
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);       
 int n;
    cout << "输入：";
    cin >> n;

    if (n <= 1) {
        cout << "不是质数\n";
        return 0;
    }

    bool isPrime = true;  // 假设是质数
    for (int j = 2; j * j <= n; j++) {      //如果 n 有因子，那么最小的因子一定 ≤ √n，所以当 j * j > n 时，可以停止搜索。
        if (n % j == 0) {
            isPrime = false;
            break;
        }
    }
    
    if (isPrime)
        cout << n << " 是质数\n";
    else
        cout << n << " 不是质数\n";
}
