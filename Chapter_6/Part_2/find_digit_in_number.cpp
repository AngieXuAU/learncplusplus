#include <cstring>
#include <iostream>
using namespace std;
char NumberString[10];
char DigitAt(int digit){
    char found_digit;
    found_digit=NumberString[digit-1];
    return found_digit;
}
int main(){
    int DigitNo;
    gets(NumberString);
    cin>>DigitNo;
    cout<<DigitAt(DigitNo);
    return 0;
}