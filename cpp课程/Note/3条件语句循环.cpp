#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(65001); // UTF-8 输出
    SetConsoleCP(65001);       // UTF-8 输入
    int age=20;

//条件语句
// if 语句 true执行 if-else 语句 否则执行


    // if (age >= 1) {
    //     cout << "You are an adult!" << endl;
    // }



// if-else if-else 语句 多个条件判断
// switch-case 语句


    // int day = 2;
    // switch (day) {
    //     case 1:
    //         cout << "Monday" << endl;
    //         break;
    //     case 2:
    //         cout << "Tuesday" << endl;
    //         break;
    //     case 3:
    //         cout << "Wednesday" << endl;
    //         break;
    //     default:
    //         cout << "Invalid day" << endl;
    // }


//判断大小写

// char x;
//     cout << "输入: ";
//     cin>>x;

//     if (x >= 'A' && x <= 'Z') {
//         cout << "大写";
//     } 
//     else if (x >= 'a' && x <= 'z') {
//         cout << "小写";
//     } 
//     else {
//         cout << "no";
//     }


//三元运算符
//condition ? value_if_true : value_if_false

cout << (age>=18 ? "yes" : "no") <<endl;

//驼峰命名法（Camel Case） 变量、函数命名规则
// 小驼峰命名法（lowerCamelCase）
// 第一个单词首字母小写，后面每个单词首字母大写
// 大驼峰命名法（UpperCamelCase / PascalCase）
// 每个单词的首字母都大写（第一个也大写）

//while循环 条件为真时不断执行  适合“不知道次数”的循环（例如输入检查

// int i ;
// int n;
// cout << "输入i:";
// cin >>i;
// cout << "输入n:";
// cin >>n;
// while (i<=n){
//     cout <<i<<endl;
//     i++;
// }

//**for循环**空循环体 只需要循环，不需要内容 可以赋予初始值
// for (初始化; 条件; 更新表达式) {
//     // 循环体
// }
//计算和


// int i ;
// int n;
// cout << "输入i:";
// cin >>i;
// cout << "输入n:";
// cin >>n;
// int sum = 0;
// int su = 1;     // 乘法初值必须是 1

// for ( int k = i ; k <= n; k++) {        //在 for 循环里，初始值（比如 k）是专门用来做循环计数的变量
//     sum += k;
// }
// // 求积
//     for (int k = i; k <= n; k++) {
//         su *= k;
//     }
// cout <<"sum=" << sum << endl;  
// cout <<"!=" << su << endl;  


// |写法         | 等价于           |
// | ----------- | ---------------- |
// | `sum += i;` | `sum = sum + i;` |
// | `sum -= i;` | `sum = sum - i;` |
// | `sum *= i;` | `sum = sum * i;` |
// | `sum /= i;` | `sum = sum / i;` |
// | `sum %= i;` | `sum = sum % i;` |

//多变量控制
// for (int i = 0, j = 10; i < j; i++, j--) {
//     cout << i << ", " << j << endl;
// }

//while实现

// int i ;
// int n;
// cout << "输入i:";
// cin >>i;
// cout << "输入n:";
// cin >>n;
// int sum = 0;
// int su = 1;  
// int k = i;            // 初始值
// while (k<n)
// {   
//     k++;
//     sum +=k;
// }
// k = i;                // 重新初始化 k
// while (k<n)
// {   
//     k++;
//     su *=k;
// }
// cout<<"sum="<<sum<<endl;
// cout<<"!="<<su<<endl;

//do-while循环 do-while 会先执行一次循环体，再判断条件


//break跳出循环

// for (int i=1;i<10;i++){
//     if (i==5)
//     break;
//     cout<<i<<"";
// }

//1到n奇数和
int n;
cout << "输入n:";
cin >>n;
int sum =0;
for (int i=1;i<=n;i++){
    if (i%2!=0){
    sum +=i;
    cout<<i<<" ";

}
}
cout <<endl<<"sum="<<sum;


//嵌套循环








 return 0;
}