#include <iostream>
int Input[100], SumOfDigits=0;
using namespace std;
int DigitSum(int a){
    SumOfDigits=0;
    if (a==0){
        return SumOfDigits;
    } else if(a<10){
        return a;
    } else {
        SumOfDigits+=a%10;
        a/=10;
    }
}
int main(){
    int K, Index=0, Product=1;
    cin>>K;
    do {
        cin>>Input[Index];
    } while (Input[Index++]!=0);
//    for (int j = 0; j < Index; ++j) {
//        if (Input[j]<K*K && Input[j]!=0){
//            Product*=Input[j];
//        }
//    }
//    cout<<Product<<endl;

    for (int j = 0; j < Index-1; ++j) {
        if (Input[j]>=667 && Input[j]<=999){
            cout<<Input[j]<<"\t";
        }
    }
//    cout<<endl;
//    for (int j = 0; j < Index; ++j) {
//        if (DigitSum(Input[j])%7==0 && Input[j]!=0){
//            cout<<Input[j]<<'\t';
//        }
//    }
//    cout<<endl;
    return 0;
}