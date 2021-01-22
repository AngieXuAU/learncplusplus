#include <cstring>
#include <iostream>
using namespace std;
bool Check(char t[], char w[], int s, int e){
    int k=0;
    for (int i = s; i <= e; ++i) {
        if (t[i]!=w[k++]){
            return false;
        }
    }
    return true;
}
void Find(char w[], char t[]){
    int j, First, Counter, Start, End;
    j=-1;
    Counter=0;

    for (Start = 0; Start < strlen(t); Start++) {
        if (t[Start]!=' '){
            for (End = Start;  End < strlen(t); ++End) {
                if (t[End]==' '){
                    break;
                }
                if (Check(t, w, Start, End)){
                    Counter++;
                    if (j=-1){
                        First=Start;
                        j=0;
                    }
                }
            }
        }
    }
    cout<<First<<"\t"<<Counter;
}

int main(){
    char Word[10], Text[200];
    gets(Word);
    strlwr(Word);
    gets(Text);
    strlwr(Text);

    Find(Word, Text);
    return 0;
}