#include<cstring>
#include<iostream>
using namespace std;
int main(){
    int i=0, j=0;
    bool Parity= true;
    char InputSequence[1000], Sequence[300][1000];
    gets(InputSequence);

    for(int k=0; k<strlen(InputSequence); k++){
        if(InputSequence[k]!=' '){
            Sequence[i][j]=InputSequence[k];
            Parity = false;
            j++;
        } else if(InputSequence[k]!=' ' && Parity== false){
            j=0;
            Sequence[i+1][j]=InputSequence[k];
            Parity= true;
            i++;
        }
    }

    if(i!=0) {
        for(int k=0; k<i-1; k++){
            cout<<strlen(Sequence[k])<<", ";
        }
        cout<<strlen(Sequence[i-1]);
    }
}