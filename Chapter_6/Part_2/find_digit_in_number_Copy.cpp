#include <cstring>
#include <iostream>
using namespace std;
char NumberString[10];
char DigitAt(int digit){
    for (int i = 1; i < strlen(NumberString); ++i) {
        NumberString[i-1]=NumberString[i];
    }
    if (digit==2){
        return NumberString[0];
    } else {
        DigitAt(--digit);
    }
}
int main(){
    int DigitNo;
    gets(NumberString);
    cin>>DigitNo;
    cout<<DigitAt(DigitNo);
    return 0;
}