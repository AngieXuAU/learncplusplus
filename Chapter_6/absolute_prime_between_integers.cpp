#include <cmath>
#include <iostream>
using namespace std;
bool Prime(int x){
    for (int i = 2; i <= sqrt(x); ++i) {
        if (x%i==0){
            return false;
        }
    }
    return true;
}
int Reverse(int Numeral){
    int Opposite=0, Temp;
    while (Numeral != 0){
        Temp=Numeral%10;
        Numeral-=Temp;
        Numeral/=10;
        Opposite*=10;
        Opposite+=Temp;
    }
    return Opposite;
}
int main(){
    int Minimum, Maximum;
    cin>>Minimum>>Maximum;
    for (int i = Minimum; i <= Maximum; ++i) {
        if (Prime(i)){
            if (Prime(Reverse(i))){
                cout<<i<<"\t";
            }
        }
    }
}