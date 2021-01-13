#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
    bool Parity=true;
    char InputSequence[1000], ArrangedSequence[200][1000], MaxW[1000], MinW[1000];
    int SequenceLength[200];
    int j=0, k=0, MaxLen=0, MinLen=0;
    gets(InputSequence);

    for (int i = 0; i < strlen(InputSequence); ++i) {
        if (InputSequence[i]!=' ' && InputSequence[i]!=',' && Parity){
            ArrangedSequence[j][k++]=InputSequence[i];
            SequenceLength[j]+=1;
        } else if (InputSequence[i]!=' ' && InputSequence[i]!=',' && !Parity){
            k=0;
            ArrangedSequence[++j][k++]=InputSequence[i];
            SequenceLength[j]+=1;
            Parity= true;
        } else if (InputSequence[i]==' ' || InputSequence[i]==','){
            Parity= false;
        }
    }

    MaxLen=SequenceLength[0];
    MinLen=SequenceLength[0];

    for (int i = 0; i <= j; ++i) {
        if (SequenceLength[i]>=MaxLen){
            MaxLen=SequenceLength[i];
            strcpy(MaxW, ArrangedSequence[i]);
        } else if (SequenceLength[i]<=MinLen){
            MinLen=SequenceLength[i];
            strcpy(MinW, ArrangedSequence[i]);
        }
    }

    cout<<MaxW<<"\n"<<MinW;
}