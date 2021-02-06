#include <iostream>
int Input[100], SumOfDigits=0;
using namespace std;
int DigitSum(int a){
    if(a<10){
        return SumOfDigits+=a;
    } else {
        SumOfDigits+=a%10;
        a/=10;
        DigitSum(a);
    }
}
int main(){
    int K, Index=0, Product=1;
    cin>>K;
    do {
        cin>>Input[Index];
    } while (Input[Index++]!=0);
    for (int j = 0; j < Index; ++j) {       //function for printing the numbers less than k squared
        if (Input[j]<K*K && Input[j]!=0){
            Product*=Input[j];
        }
    }
    cout<<Product<<endl;
    for (int j = 0; j < Index-1; ++j) {     //function for printing the numbers from 667-999
        if (Input[j]>=667 && Input[j]<=999){
            cout<<Input[j]<<"\t";
        }
    }
    cout<<endl;
    for (int j = 0; j < Index; ++j) {       //function for printing the numbers whose digit sum a multiple of 7
        SumOfDigits=0;
        if (DigitSum(Input[j])%7==0 && Input[j]!=0){
            cout<<Input[j]<<'\t';
        }
    }
    cout<<endl;
    return 0;
}