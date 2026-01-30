#include <iostream>
using namespace std;

int main(){
  
  
    int n;
    cout << "输入n:";
    cin >> n ;
    int sum = 1;

    for (int i = 1; i <=n; i++) {
        
        for (int j=1;j<=i;j++){
            cout <<"*";
        }
        cout << endl;
    }cout << endl;


    for (int i = 1; i <=n; i++) {
        
        for (int j=1;j<=i;j++){
            cout <<i;
        }
        cout << endl;
    }cout << endl;


    for (int i = 1; i <=n; i++) {
        for (int j=i;j>=1;j--){
            cout <<j;
        }
        cout << endl;
    }cout << endl;

   
    for (int i = 1; i <=n; i++) {
        for (int j=1;j<=i;j++){ 
            cout << sum<< " ";
            sum++;
        }
        cout << endl;
    }cout << endl;
    

    for (int i = 1; i <=n; i++) {
        for (int j=1;j<i;j++) { 
            cout << " "<< " ";
        }
        for (int k=0;k<=n-i;k++){
            cout << i<< " ";
        }
        cout << endl;
    }cout << endl;


    for (int i=1;i<=n;i++){
        for (int j=n;j>i;j--){
            cout <<" "<<" ";
        }
        for (int k=1;k<=i;k++){
            cout <<k<<" ";
        }
        for (int k=i-1;k>=1;k--){
            cout <<k<<" ";
        }
        cout<< endl;
    }cout << endl;


    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            cout <<" "<<" ";
        }
        cout<<"*"<< " ";
        for (int k=1;k<2*(i-1);k++){
            cout <<" "<<" ";
        }
        if(i!=1){
        cout<<"*";
        }
        cout<< endl;
    }
    for (int i=1;i<n;i++){
        for (int j=1;j<=i;j++){
            cout <<" "<<" ";
        }
        cout<<"*"<< " ";
        for (int k=1;k<2*(n-i-1);k++){
            cout <<" "<<" ";
        }
        if (i!=n-1){
        cout<<"*";  
        cout<< endl;
    }
    }
        











    return 0;

}   