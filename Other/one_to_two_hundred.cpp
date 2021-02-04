#include <iostream>
using namespace std;
void Output(int number1, int number2){
    int Index=4;
    if (number2>102){
        while (Index>=1) {
            cout<<++number1<<"\t";
            Index--;
        }
        Index=4;
        while (Index>=1){
            cout<<--number2<<"\t";
            Index--;
        }
        Output(number1, number2);
    } else {
        return;
    }
}
int main(){
    int Number1=0, Number2=200;
    Output(Number1, Number2);
    return 0;
}