#include <cstring>
#include <iostream>
using namespace std;
char Decode(char r, char k){
    char c;
    c=int(r)-(int(k)-97);
    return c;
}
int main(){
    char Key[100], Result[100], Message[100];
    gets(Key);
    gets(Result);

    Key[strlen(Key)]='\0';
    Result[strlen(Result)]='\0';
    for (int i = 0; i < strlen(Result); ++i) {
        Message[i]=Decode(Result[i], Key[i]);
    }

    puts(Message);
    return 0;
}