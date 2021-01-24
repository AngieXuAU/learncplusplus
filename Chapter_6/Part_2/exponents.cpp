#include<iostream>
using namespace std;
int Xn(int);
int x;
int main(){
    int n;
    cin>>x>>n;
    cout<<x<<'^'<<n<<"="<<Xn(n)<<endl;
    return 0;
}
int Xn(int n){
    if (n==0){
        return 1;
    } else {
        return x*Xn(n-1);
    }
}