#include <cstring>
#include <iostream>
using namespace std;
char Original[100];

void ReverseFunc(int length_of_original) {
    char LastChar, Length;
    if(length_of_original==0){
        return;
    } else {
        LastChar=Original[length_of_original-1];
        cout<<LastChar;
        Original[strlen(Original)-1]='\0';
        ReverseFunc(strlen(Original));
    }
}
int main(){
    gets(Original);
    Original[strlen(Original)-1]={'\0'};
    ReverseFunc(strlen(Original));
}