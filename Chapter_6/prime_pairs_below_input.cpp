#include <cmath>
#include <iostream>
using namespace std;

bool Prime(int n){
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int Max;
    cin>>Max;
    for (int i = 2; i <= Max-2; ++i) {
        if (Prime(i) && Prime(i+2)){
            cout<<i<<"\t"<<i+2<<endl;
        }
    }
    return 0;
}