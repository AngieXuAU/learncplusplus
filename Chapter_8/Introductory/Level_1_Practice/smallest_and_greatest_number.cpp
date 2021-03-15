#include <iostream>
using namespace std;
int *NumberPA[3];
int main(){
    int CompareL=0, CompareS, InputValue;
    cout<<"Enter three integers"<<endl;
    for (int i = 0; i < 3; ++i) {
        cin>>InputValue;
        if (i==0){
            CompareS=InputValue;
        }
        NumberPA[i]=&InputValue;
        if (*NumberPA[i]>CompareL){
            CompareL=*NumberPA[i];
        } else if (*NumberPA[i]<CompareS){
            CompareS=*NumberPA[i];
        }
    }
    cout<<CompareL<<"\t"<<CompareS;
}