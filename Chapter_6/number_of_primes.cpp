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
int main(){
    int Minimum, Maximum, Counter=0;
    cin>>Minimum>>Maximum;
    for (int i = Minimum; i <= Maximum; ++i) {
        if (Prime(i)){
            Counter++;
        }
    }
    cout<<Counter;
}