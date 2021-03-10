#include <iostream>
using namespace std;
const int Control=5;
int main(){
    int *PointerArray[Control], IntArray[Control];
    for (int i = 0; i < Control; ++i) {
        cin>>IntArray[i];
        PointerArray[i]=&IntArray[i];
        cout<<*PointerArray[i]<<endl;
    }
}