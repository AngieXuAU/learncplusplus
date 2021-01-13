#include <cstring>
#include <iostream>
using namespace std;
int main() {
    bool Punctuation[500]={false}, NewWord= false;
    char InputSequence[500];
    char ArrangedSequence[25][20];
    int j=0, k=0;
    gets(InputSequence);

    for (int i = 0; i < strlen(InputSequence); ++i) {
        if (InputSequence[i]!=' '){
            if (!NewWord){
                ArrangedSequence[j][k++]=InputSequence[i];
            } else {
                k=0;
                ArrangedSequence[++j][k++]=InputSequence[i];
                NewWord= true;
            }
        } else {
            NewWord= false;
        }
    }

    for (int i = 0; i <= j; ++i) { //i controls the row number
        if (ArrangedSequence[i][strlen(ArrangedSequence[i])-1]!=((InputSequence[i]>='A' && InputSequence[i]<='Z') || (InputSequence[i]>='a' && InputSequence[i]<='z'))){
            for (int l = strlen(ArrangedSequence[i])-2; l > 0; --l) {
                cout<<ArrangedSequence[i][l];
            }
            cout<<ArrangedSequence[i][strlen(ArrangedSequence[i])-1]<<' ';
        } else {
            for (int l = strlen(ArrangedSequence[i])-1; l > 0; --l) {
                cout<<ArrangedSequence[i][l];
            }
            cout<<' ';
        }
    }
    return 0;
}