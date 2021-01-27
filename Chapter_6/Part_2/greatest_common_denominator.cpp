#include <iostream>
using namespace std;
int FindGDC(int m, int n){
    if (m%n==0){
        cout<<n;
    } else {
        m=n;
        n=m%n;
        return FindGDC(m, n);
    }
}
int main(){
    int Number1, Number2;
    cin>>Number1>>Number2;
    if (Number1>Number2){
        cout<<FindGDC(Number1, Number2);
    } else if (Number2>Number1){
        cout<<FindGDC(Number2, Number1);
    } else {
        cout<<Number1;
    }
    return 0;
}