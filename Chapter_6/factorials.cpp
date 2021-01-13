#include <iostream>
using namespace std;
int Factorial(int);
int main(){
    int Sum=0;
    for (int i = 0; i <=10 ; ++i) {
        Sum+=Factorial(i);
    }
    cout<<"Sum= "<<Sum<<endl;
}
int Factorial(int n){
    int s=1;
    for (int i = 1; i <= n; ++i) {
        s*=i;
    }
    return s;
}
