#include <iostream>
using namespace std;
int Reverse(int Numeral){
    int Other, LastDigit, Opposite=0;
    LastDigit=Numeral%10;
    Other=(Numeral-LastDigit)/10;
    if (Other==0){
        return Opposite;
    } else {
        Opposite=LastDigit*10+Reverse(Other);
    }
    return Opposite;
}
int main(){
    int Input, ReversedInput;
    cin>>Input;
    ReversedInput=Reverse(Input);
    cout<<ReversedInput;
    return 0;
}
