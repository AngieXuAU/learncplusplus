#include <iostream>
using namespace std;
int Factorial(int);
int main(){
    int Base;
    cin>>Base;
    cout<<Base<<"!= "<<Factorial(Base)<<endl;
    return 0;
}
int Factorial(int n){
    return n==0? 1:n*Factorial(n-1);
}