#include <iostream>
using namespace std;
int AckermannFunc(int m, int n){
    int FuncReturn;
    if (m==0){
        n++;
    } else if (m>0 && n==0){
        FuncReturn=AckermannFunc(m-1, 1);
    } else if (m>0 && n>0){
        FuncReturn=AckermannFunc(m-1, AckermannFunc(m, n-1));
    }
    return FuncReturn;
}
int main(){
    int m, n, a;
    cout<<"Enter two integers m and n, where m<=3 and n<=10";
    cin>>m>>n;
    a=AckermannFunc(m, n);
    cout<<a;
}