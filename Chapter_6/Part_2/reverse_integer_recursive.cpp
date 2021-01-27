#include <iostream>
using namespace std;
int Reverse(int Numeral){
    int Other, LastDigit;
    if(Numeral<10){
        cout<<Numeral;
        return Numeral;
    } else {
        LastDigit=Numeral % 10;
        Other=(Numeral-LastDigit)/10;
        cout<<LastDigit;
        return Reverse(Other);
    }
}
int main(){
    int Input;
    cin>>Input;
    Reverse(Input);
    return 0;
}
