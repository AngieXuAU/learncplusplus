#include <iostream>
using namespace std;
int Maximum(int x, int y){
    return x>y? x:y;
}
int main(){
    int y=7, x=6;
    cout<<Maximum(y,x);
}

