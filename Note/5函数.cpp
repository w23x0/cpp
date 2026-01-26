#include <iostream>
using namespace std;

//编译器自上而下编译，函数放在上面   
//main() 是程序的入口点（Entry Point）主函数由编译器自动调用
//void函数不返回值
int hello() {
        cout << "Hello, World!" ;
        return 42;
    }

    
//函数参数 函数需要的输入值 自变量 输入值类型，返回值类型
//函数的参数是局部变量 外面无法访问
//形参（形式参数）  实参（实际参数）
//赘余冗余性 任务重复过多应创建函数

double min(double a, double b){ 
    if (a<b)
        return a;
    else
        return b;
}


//1到n的和
int sumN(int n){
    int sum=0;
    for (int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}


// n的阶乘
unsigned long long factorial(int n) {
    if (n < 0) return 0; // 负数没有阶乘，返回0表示错误
    unsigned long long res = 1;
    for (int i = 2; i <= n; ++i) res *= i;
    return res;
}



//编译器，main函数，调用函数，栈内存，栈帧
//main() 是程序的入口点（Entry Point）


//通过值传递的两个函数 按值传递
//引用传递（指针) STL标准模板库


//一个数字的各位数字和
int digitSum(int n){
    int sum=0;
    while (n>0){
        sum+=n%10; //取个位数字
        n/=10;     //去掉个位数字
    }
    return sum;
}




 


int main(){
         

    //int 
    //void

cout<<hello()<<endl; //执行 → 返回 → 输出
int vin=hello();//执行 → 返回 → 赋给vin
cout <<endl;
cout<<"hello="<<vin<<endl;


cout << "min=" << min(3.5,2.5) << endl;


int n;
cout<<"n=";
cin >> n;
cout<<"sum=" << sumN(n)<<endl;
cout << "factorial=" << factorial(n)<<endl;
cout << "digitSum=" << digitSum(n)<<endl;



return 0;   
}