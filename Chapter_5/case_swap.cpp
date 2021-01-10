#include<cstring>
#include<iostream>

using namespace std;
int main(){
    char Sequence[100];
    gets(Sequence);

    for(int i=0; i<strlen(Sequence); i++){
        if(Sequence[i]>=97 && Sequence[i]<=122){
            Sequence[i]-=32;
        }
    }

    puts(Sequence);
}