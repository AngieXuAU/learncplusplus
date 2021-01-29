using namespace std;
#include <cmath>
#include <iostream>
int Sqrt(int x, int n){
    if (n==1){
        return sqrt(1+x);
    } else {
        return sqrt(n+Sqrt(x, --n));
    }
}
int main(){
    float x, n;
    cin>>x>>n;
    cout<<Sqrt(x, n);
}