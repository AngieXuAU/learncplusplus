#include <iostream>
using namespace std;
int Reverse(int x){
    int Hundreds, Tens, Units, Opposite;
    Units=x%10;
    Tens=x/10%10;
    Hundreds=x/100;
    Opposite=Units*100+Tens*10+Hundreds;
    return Opposite;
}
int main(){
    int Input;
    cin>>Input;
    if (Input==Reverse(Input)){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    return 0;
}