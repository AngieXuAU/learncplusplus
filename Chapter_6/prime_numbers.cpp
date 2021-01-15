#include <cmath>
#include <iostream>
using namespace std;
bool Primary(int x){
    bool Prime= false;
    for (int i = 2; i <= sqrt(x); ++i) {
        if (x%i==0){
            Prime= true;
        }
    }
    return Prime;
}
int main(){
    int InputMax;
    cin>>InputMax;
    for (int n = 2; n <= InputMax; ++n) {
        if (!Primary(n)){
            cout<<n<<"\t";
        }
    }
}