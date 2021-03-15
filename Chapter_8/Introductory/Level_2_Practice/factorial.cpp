#include <iostream>
using namespace std;
int *InputP;
int Factorise(int n){
    return n==0? 1:n*Factorise(n-1);
}
int main(){
    int Input;
    cout<<"Enter an integer to be factorised:"<<endl;
    cin>>Input;
    InputP=&Input;
    cout<<*InputP<<"! = "<<Factorise(*InputP);
}