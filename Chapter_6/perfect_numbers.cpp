#include <iostream>
using namespace std;
bool Perfection(int x){
    bool Perfect;
    int Sum=0;
    for (int i = 1; i < x; ++i) {
        if (x%i==0){
            Sum+=i;
        }
    }
    if (Sum==x){
        Perfect= true;
    } else {
        Perfect= false;
    }
    return Perfect;
}
int main(){
    for (int n = 2; n <= 100; ++n) {
        if (Perfection(n)){
            cout<<n<<"\t";
        }
    }
}