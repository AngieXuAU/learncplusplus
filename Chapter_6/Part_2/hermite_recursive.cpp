#include <iostream>
using namespace std;
int HermiteFunc(int n, int x){
    if (n==0){
        return 1;
    } else if (n==1){
        return 2*x;
    } else if (n>1){
        return 2*x*HermiteFunc(n-1, x)-2*(n-1)*HermiteFunc(n-2, x);
    }
}
int main(){
    int n, x;
    cin>>n>>x;
    cout<<HermiteFunc(n, x);
}
