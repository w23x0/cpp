#include <iostream>//预处理
using namespace std;//命名空间
    
int main(){ //主函数
   cout <<"hello word" <<endl;
   cout <<"hello\n";
   
   //变量
   int age;         //整数 4字节（32 位），范围是从 -2,147,483,648 到 2,147,483,647
   char ch ='C';         //字符 字符集编码 1 字节（8 位） ASCII值 单引号
   float fl= 1.91;       //浮点数 科学计数法 4 字节（32 位）6-7 位有效数字// a使用 'f' 后缀表示 float 类型
   bool bo;           //布尔类型的变量类型 存储逻辑值 true 1 或 false 0 1 字节（8 位） 用于逻辑运算
   double d=100.99;      //双精度浮点数 15-16 位有效数字 8 字节（64 位） IEEE 754 双精度标准
   
   
   //转换
   //取整数
   
   //输入 输入输出是全局对象
   cout<<"age=";
   cin>>age;
   cout<<"you age is:"<<age<<endl;
   
   //运算符
   // 算术运算符（Arithmetic Operators）
   // 加 + 减 - 乘 * 
   // 除 / 需要浮点可以确保至少一个操作数是浮点数
   // 取余 % 
   // 自增 ++ 自减 -- 前置和后置自增的顺序，前先加后用，后先用后加
   
   //关系运算符（Relational Operators）
   //等于== 不等于!= 大于小于>< 大于等于小于等于
   //ture or false
   // 等于
   int a = 0;
   int b = 1;
   cout << "a == b: " << (a == b) << endl;  // 输出 0 (false)

    // 不等于
   cout << "a != b: " << (a != b) << endl;  // 输出 1 (true)

    // 大于
   cout << "a > b: " << (a > b) << endl;  // 输出 0 (false)

    // 小于
   cout << "a < b: " << (a < b) << endl;  // 输出 1 (true)

    // 大于等于
   cout << "a >= b: " << (a >= b) << endl;  // 输出 0 (false)

    // 小于等于
   cout << "a <= b: " << (a <= b) << endl;  // 输出 1 (true)


   //逻辑运算符（Logical Operators）处理布尔值
   //与 && 或 || 非 !
   bool b0=true;
   bool b1=false;
   cout<<"b0:"<<b0<<"\n"<<"b1:"<<b1<<endl;
   cout <<"b0&&b1:"<<(b0&&b1)<<endl;
   cout <<"b0||b1:"<<(b0||b1)<<endl;
   cout <<"!b0:"<<(!b0)<<endl;
   cout <<"!b1:"<<(!b1)<<endl;
   
   return 0;
}