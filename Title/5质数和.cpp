#include <iostream>
#include <windows.h>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) {
        return 0;
    }
    if (n == 2) {
        return n;
    }
    if (n % 2 == 0) {
        return 0;
    }
    for (long long j = 3; j <= n / j; j += 2) {
        if (n % j == 0) {
            return 0;
        }
    }
    return n;
}
int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);       
    long long n;
    cout << "输入n：";
    cin >> n;
    long long sum=0;
    for (int i=2;i<=n;i++){
        long long val=isPrime(i);
        sum +=val;
    }
    cout<<"质数和="<<sum<<endl;
    return 0;
}