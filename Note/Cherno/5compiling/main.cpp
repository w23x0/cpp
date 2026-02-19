void log(const char*);
int main()
{
    log ("hello dream");
    return 0;


// 预处理器
// 头文件#include <>   （系统）
// 头文件#include ""   （用户自定义）   

#include "Preprocessor.h"

// g++ -E *.cpp -o *.i
// 其他预处理指令
// #define 宏定义
// #ifdef #ifndef 条件编译
// #pragma 编译指令



// cpps >> compiling >> object(obj) >> linking >> exe
// g++  -o *.exe *.cpp
// g++  -c *.cpp -o *.obj