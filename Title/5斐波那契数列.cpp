#include <iostream>
#include <chrono>
using namespace std;

int main(){

    cout<<"输入n=";
    long long n;
    cin>>n;
    long long sum=0;
    long long a = 0, b = 1, c;

//动态规划/迭代法    
// 时间复杂度: O(N)
// 空间复杂度: O(1)
    auto start = chrono::high_resolution_clock::now();
    
    for (int i=1;i<=n;i++){
        cout<<a<<" ";
        sum+=a;
        c=a+b;
        a=b;
        b=c;
    }
    cout <<endl<< "斐波那契数列前" << n << "项的和为：" << sum << endl;
    
    for (int i = 0; i < 100000000; i++);   
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "动态规划/迭代法 耗时：" << duration.count() << " ms" << endl;



    return 0;   
}