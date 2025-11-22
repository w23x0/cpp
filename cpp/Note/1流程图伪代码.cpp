#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);       
  
}

// 计算代码运行时间的示例

#include <chrono>

int main() {

    auto start = chrono::high_resolution_clock::now();

    // ……你的代码放这里……

    for (int i = 0; i < 100000000; i++);   
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "耗时：" << duration.count() << " ms" << endl;

    return 0;
}
