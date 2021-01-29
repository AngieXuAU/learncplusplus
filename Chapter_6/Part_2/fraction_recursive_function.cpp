#include <iostream>
using namespace std;
float FracFunc(float x, float n){
    if (n==0){
        return x/(1+x);
    } else {
        n--;
        return x/(n+FracFunc(x, n));
    }
}
int main(){
    float X, N;
    cin>>X>>N;
    cout<<FracFunc(X, N+1);
}