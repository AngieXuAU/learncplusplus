#include <iostream>
using namespace std;
int main(){
    int Input, *P, **PP;
    P=&Input;
    PP=&P;
    cin>>Input;
    cout<<P<<"\t"<<PP;  //if added * and ** in front of P and PP, both will output the input
}

