#include <cmath>
#include <iostream>
using namespace std;
bool Prime(int x){
    bool Primary= true;
    for (int i = 2; i <= sqrt(x); ++i) {
        if (x%i==0){
            Primary= false;
        }
    }
    return Primary;
}
int main(){
    int Tens, Units, Opposite;
    for (int i = 11; i <= 99; ++i) {
        if (Prime(i)){
            Units=i%10;
            Tens=i/10;
            Opposite=10*Units+Tens;
            if (Prime(Opposite)){
                cout<<i<<"\t";
            }
        }
    }
}