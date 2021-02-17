//this program did not work
#include <cmath>
#include <iostream>
using namespace std;
int MultiplyTenRoot(int a){
    return 10*sqrt(MultiplyTenRoot(a));
}
int main(){
    cout<<MultiplyTenRoot(10);
}