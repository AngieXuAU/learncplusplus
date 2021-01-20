#include <cstring>
#include <iostream>
using namespace std;
char Decode(char r, char k){
    char c;
    int i;
    c=int(r)-(int(k)-97);
    return c;
}
int main(){
    char Key[100], Result[100], Message[100];
    gets(Key);
    gets(Result);

    for (int i = 0; i < strlen(Result); ++i) {
        Message[i]=Decode(Result[i], Key[i]);
    }

    puts(Message);
    return 0;
}