#include <iostream>
using namespace std;
int main(){
    char MonthName[9];
    int MonthNumber;
    gets(MonthName);
    switch (MonthName[0]) {
        case 'J':
            if (MonthName[1] == 'a') {
                MonthNumber = 1;
            } else if (MonthName[2] == 'n') {
                MonthNumber = 6;
            } else {
                MonthNumber = 7;
            }
            break;
        case 'M':
            if (MonthName[2]=='r'){
                MonthNumber=3;
            } else {
                MonthNumber=5;
            }
            break;
        case 'A':
            if (MonthName[1]=='p'){
                MonthNumber=4;
            } else {
                MonthNumber=8;
            }
            break;
        case 'F':
            MonthNumber=2;
            break;
        case 'S':
            MonthNumber=9;
            break;
        case 'O':
            MonthNumber=10;
            break;
        case 'N':
            MonthNumber=11;
            break;
        case 'D':
            MonthNumber=12;
            break;
    }
    cout<<MonthNumber;
}