#include <iostream>
using namespace std;
int Order[20];
void Swap(int &a, int &b){
    int Temp=a;
    a=b;
    b=Temp;
}
void BubbleSort(int length){
    if (length==1){
        return;
    } else {
        for (int i = 0; i < length - 1; ++i) {
            if (Order[i] > Order[i + 1]) {
                Swap(Order[i], Order[i + 1]);
            }
        }
        length--;
        BubbleSort(length);
    }
}
int main(){
    int Index=0;
    cout<<Index;
    do {
        cin>>Order[Index];
    } while (Order[Index++]!=-1);
    BubbleSort(Index-1);
    for (int i = 0; i < Index-1; ++i) {
        cout<<Order[i];
    }
}