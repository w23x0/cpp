//判断一个数是否为质数（Prime Number）
// 质数：只有 1 和它本身两个约数
// 判断方法：尝试用 2 ~ sqrt(n) 的数去除，如果能整除就不是质数
#include <iostream>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (long long j = 3; j <= n / j; j += 2) {
        if (n % j == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    long long n;
    cout << "输入：";
    cin >> n;

    if (isPrime(n))
        cout << n << " 是质数\n";
    else
        cout << n << " 不是质数\n";
}
