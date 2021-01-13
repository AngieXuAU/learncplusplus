#include <iostream>
using namespace std;
bool Check(int n, int d){
    while(n){
        int e=n%10;
        n/=10;
        if(e==d){
            return true;
        } else {
            return false;
        }
    }
}
int main(){
    int Number, Digit;
    cout<<"Enter a number and a digit";
    cin>>Number>>Digit;

    if (Check(Number, Digit)== true){
        cout<<"True"<<endl;
    } else {
        cout<<"False"<<endl;
    }
}