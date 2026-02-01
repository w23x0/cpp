#include <iostream>
using namespace std;
#include <algorithm>
#include <limits>
#include <stdint.h>

// 优化说明：直接计算阶乘后相除容易溢出且效率低。
// 更稳健做法：使用乘法-除法的迭代公式
// C(n,r) = ∏_{i=1..r} (n - r + i) / i
// 在循环中用 __int128 做中间计算以避免中间乘法溢出（在支持的编译器上）。

unsigned long long comb(int n, int r) {
    if (r < 0 || r > n) return 0;
    r = min(r, n - r);
    if (r == 0) return 1;

    unsigned long long res = 1;
    for (int i = 1; i <= r; ++i) {
        // 使用 __int128 做中间计算以减少溢出风险
        __int128 tmp = (__int128)res * (n - r + i);
        tmp /= i; // 在数学上整除是精确的
        if (tmp > ( __int128)numeric_limits<unsigned long long>::max()) {
            // 超出 unsigned long long 范围，返回最大值作为溢出指示（可替换为抛错或多精度处理）
            return numeric_limits<unsigned long long>::max();
        }
        res = (unsigned long long)tmp;
    }
    return res;
}

int main(){
    cout<<"组合数C(n,r)"<<endl;
    int n,r;
    cout << "输入n和r:";
    cin >> n >> r ;
    if (r>n || r<0){
        cout << "输入错误，r应在0到n之间"<<endl;
        return 1;
    }
    unsigned long long ans = comb(n, r);
    if (ans == numeric_limits<unsigned long long>::max()) {
        cout << "结果太大，超出 unsigned long long 范围。可改用多精度库计算（boost::multiprecision::cpp_int）。" << endl;
    } else {
        cout << "C("<< n <<","<< r <<")=" << ans << endl;
    }




    return 0;
}
