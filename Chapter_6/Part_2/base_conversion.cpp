#include <cstring>
#include <iostream>
using namespace std;
char ConvertCharacters[6]={'A', 'B', 'C', 'D', 'E', 'F'}, BaseN[20];
void Convert(int Number, int Base){
    int Digit, i=0;
    if (Number==0){
        return;
    } else {
        Digit=Number%Base;
        Number/=Base;
        if (Digit>10){
            Digit=ConvertCharacters[Digit-11];
        }
        BaseN[i]=char(Digit);
        Convert(Number, Base);
        i++;
    }
}
int main(){
    int BaseNumber, Original;
    cin>>Original>>BaseNumber;
    Convert(Original,BaseNumber);
    for (int i = strlen(BaseN)-1; i >= 0; ++i) {
        cout<<BaseN[i];
    }
}