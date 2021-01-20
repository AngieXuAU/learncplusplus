#include <cmath>
#include <iostream>
using namespace std;
bool Prime(int x){
    bool Primary= false;
    for (int i = 2; i <= sqrt(x); ++i) {
        if (x%i==0){
            Primary= true;
        }
    }
    return Primary;
}
int main(){
    int Sum, a;
    for (Sum = 6; Sum <= 100; Sum+=2) {
        for (a = 2; a <= Sum; ++a) {
            if (!Prime(a) && !Prime(Sum-a)){
                cout<<Sum<<"\t"<<a<<"\t"<<Sum-a<<endl;
                break;
            }
        }
    }
    return 0;
}
