#include <iostream>
using namespace std;
int BinaryCount(int Number){
    int Zero=0, One=0, Larger;
    while (Number!=0){
        if (Number%2==0){
            Zero++;
        } else {
            One++;
        }
        Number/=2;
    }
    Larger=Zero>One? 0:1;
    return Larger;
}
int main(){
    int One=0, Zero=0;

    for (int i = 1; i <= 1000; ++i) {
        if (BinaryCount(i)==1){
            One++;
        } else {
            Zero++;
        }
    }
    cout<<One<<" "<<Zero;
}