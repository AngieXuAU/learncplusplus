#include <iostream>
using namespace std;
int AckermannFunc(int m, int n){
    if (m==0){
        return ++n;
    } else if (m>0 && n==0){
        return AckermannFunc(m-1, 1);
    } else if (m>0 && n>0){
        return AckermannFunc(m-1, AckermannFunc(m, n-1));
    }
}
int main(){
    int m, n, a;
    cout<<"Enter two integers m and n, where m<=3 and n<=10";
    cin>>m>>n;
    a=AckermannFunc(m, n);
    cout<<a;
}