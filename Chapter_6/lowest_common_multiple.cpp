#include <iostream>
using namespace std;
int x, y;
int GCD(int x, int y){
    int Remainder=x%y;
    while (Remainder!=0){
        x=y;
        y=Remainder;
        Remainder='x';
    }
    return 0;
}
int LCM(){
    return x*y/GCD(x, y);
}
int main(){
    cin>>x>>y;
    cout<<LCM()<<endl;
    return 0;
}