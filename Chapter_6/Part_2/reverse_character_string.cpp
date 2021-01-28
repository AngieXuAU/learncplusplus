#include <cstring>
#include <iostream>
using namespace std;
char Original[100];

void ReverseFunc(int length_of_original) {
    char ReversedString[100], LastChar, Length;
    LastChar=Original[length_of_original-1];
    for (int i = 0; i < length_of_original-1; ++i) {
        ReversedString[i]=Original[i];
    }
    cout<<LastChar;
    Length=strlen(ReversedString);
    ReverseFunc(Length);
}
int main(){
    int i=0;
    do {
        cin>>Original[i++];
    } while (Original[i]!='!');
    ReverseFunc(strlen(Original));
}