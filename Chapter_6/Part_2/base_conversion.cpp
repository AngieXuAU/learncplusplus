#include <iostream>
using namespace std;
char ConvertCharacters[6]={'A', 'B', 'C', 'D', 'E', 'F'};
int Convert(int Number, int Base){
    int ConvertedN=0, Digit;
    if (Number==0){
        return ConvertedN;
    } else {
        Digit=Number%Base;
        Number/=Base;
        if (Digit>10){
            Digit=ConvertCharacters[Digit-11];
        }
        ConvertedN+=Digit;
        ConvertedN*=10;
        Convert(Number, Base);
    }
    return ConvertedN;

}
int main(){
    int BaseNumber, Original, Converted;
    cin>>Original>>BaseNumber;
    Converted=Convert(Original, BaseNumber);
    cout<<Converted;
}