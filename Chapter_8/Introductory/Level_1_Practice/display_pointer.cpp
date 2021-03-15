#include<iostream>
using namespace std;
void print(int a){
    cout<<&a<<"\n"; //if & is here, then will print pointer
}

int main(){
    int Input;
    cout<<"Enter an int\n";
    cin>>Input;
    print(Input);   //if & is here, then will print number
    return 0;
}
