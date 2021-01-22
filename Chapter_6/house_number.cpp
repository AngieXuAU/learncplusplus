#include <iostream>
using namespace std;
int Function(int a, int b){
    int Sum=0;
    for (int i = 1; i <= a; ++i) {
        Sum+=i;
    }
    return Sum-2*b;
}
int main(){
    int Input;
    cin>>Input;

    for (int p = 1; p <= Input; ++p) {
        for (int q = 1; q <= p; ++q) {
            if (Function(p, q) == Input){
                cout<<p<<" "<<q;
            }
        }
    }
    return 0;
}