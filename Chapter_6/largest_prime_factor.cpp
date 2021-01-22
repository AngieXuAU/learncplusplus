#include <cmath>
#include <iostream>
using namespace std;
bool Prime(int Numeral){
    for (int i = 2; i <= sqrt(Numeral); ++i) {
        if (Numeral%i==0){
            return false;
        }
    }
    return true;
}
int LargestPrimeFactor(int Number){
    for (int i = sqrt(Number); i >= 2; --i) {
        if (Number%i==0 && Prime(i)){
            return i;
        }
    }
    return Number;
}
int main(){
    int Minimum, Maximum, PrimeFactor;
    cin>>Minimum>>Maximum;
    for (int i = Minimum; i <= Maximum; ++i) {
        cout<<i<<"\t";
        if (Prime(i)){
            cout<<i<<endl;
        } else {
            PrimeFactor=LargestPrimeFactor(i);
            cout<<PrimeFactor<<endl;
        }
    }
    return 0;
}