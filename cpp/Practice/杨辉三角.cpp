#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

void printPascalsTriangle(int n) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    vector<vector<int>> triangle(n);  // 创建一个二维vector来存储杨辉三角的值

    for (int i = 0; i < n; i++) {
        triangle[i].resize(i + 1);  // 每行的元素个数是i+1
        triangle[i][0] = triangle[i][i] = 1;  // 每行的第一个和最后一个元素是1

        // 填充每行中间的元素
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }

    // 输出杨辉三角
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < triangle[i].size(); j++) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "请输入杨辉三角的行数: ";
    cin >> n;

    printPascalsTriangle(n);  // 调用函数输出杨辉三角

    return 0;
}
