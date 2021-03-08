#include <iostream>
using namespace std;
int IntegerArray[3], *ArrayPointers[3];
int FindIndexRanked(int ranked);
int main(){
    for (int i = 0; i < 2; ++i) {
        cin>>IntegerArray[i];
        ArrayPointers[i]=&IntegerArray[i];
    }
    cout<<FindIndexRanked(0)<<"\t"<<FindIndexRanked(2);
}