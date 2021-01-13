#include <cstring>
#include <iostream>
using namespace std;
int main(){
    bool Parity = true;
    char InputSequence[1000], Sequence[300][1000];
    int j=0, k=0;
    gets(InputSequence);

    for (int i = 0; i < strlen(InputSequence); ++i) {
        if (InputSequence[i]!=' ' && Parity==true){
            Sequence[j][k]=InputSequence[i];
            k++;
        } else if(InputSequence[i]!=' ' && Parity==false){
            j++;
            k=0;
            Sequence[j][k]=InputSequence[i];
            Parity= true;
        } else {
            Parity=false;
        }
    }

    for (int i = 0; i <= j; ++i) {
        cout<<strlen(Sequence[i])<<", ";
    }
    return 0;
}