#include <cstring>
#include <iostream>
using namespace std;
bool Find(char w, char t){
    while (t!=' '){
        for (int i = 0 ; i < strlen(w); ++i) {

        }
    }
}
int main(){
    char Word[10], Text[200];
    int j=-1, First, Counter;
    gets(Word);
    strlwr(Word);
    gets(Text);
    strlwr(Text);

    for (int i = 0; i < strlen(Text); ++i) {
        if (Text[i]!=' '){
            if (Find(Word[0], Text[i])){
                Counter++;
                if (j=-1) {
                    First = i;
                    j = 0;
                }
            }
        }
    }

    cout<<Counter<<"\t"<<First;
}