#include <cstdio>
using namespace std;
void Output(int number1, int number2){
    int Index=4;
    if (number2>102){
        while (Index>=1) {
            printf("%4d", ++number1);
            Index--;
        }
        Index=4;
        while (Index>=1){
            printf("%4d", --number1);
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