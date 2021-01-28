#include <cstring>
#include <iostream>
using namespace std;
char NumberString[10];
char DigitAt(int digit){
    char found_digit;
    for (int i = 1; i < strlen(NumberString); ++i) {
        NumberString[i-1]=NumberString[i];
    }
    found_digit=NumberString[0];
    if (digit==2){
        return found_digit;
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