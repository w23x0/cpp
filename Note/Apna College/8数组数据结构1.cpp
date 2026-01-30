#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    // 数组数据结构 (Array Data Structure)
    // 数组是一种用于存储多个相同类型数据的集合。每个数据项称为数组的元素。
    // 数组的索引通常从0开始。直接赋值，可以不写大小
    int marks[] = {13, 0, 7, 2, 88}; 
    int max=marks[0]; 
    int min=marks[0];
    int sum=0;
    cout << "学生的成绩为: ";
    for(int i = 0; i < 5; i++){
        cout << marks[i] << " ";
    }
    for(int i = 0; i < 5; i++){
        if (marks[i]>=max){
            max=marks[i];
        } 
        if (marks[i]<=min){
            min=marks[i];
        }
        sum+=marks[i];
        }
    cout<<endl<<"最高成绩是: "<<max<<endl;
    cout<<"最低成绩是: "<<min<<endl;
    cout<<"总分是: "<<sum<<endl;
    cout<<"平均分是: "<<sum/5<<endl;
    cout<<"人数是: "<<sizeof(marks)/sizeof(marks[0])<<endl;
    int size;
    cout<<"请输入数组大小: ";
    cin>>size;
    int number[size];
    for (int i = 0; i < size; i++){
        cout<<"请输入第"<<i+1<<"个数: ";
        cin>>number[i];
    }
    for (int i = 0; i < size; i++){
        cout<<number[i]<<" ";
    }




    return 0;
}