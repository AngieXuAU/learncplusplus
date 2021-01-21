#include <cstring>
#include <iostream>
using namespace std;
void Find(char w[10], char t[200]){
    int j, k, First, Counter;
    j=-1;
    k=0;
    Counter=0;
    for (int i = 0; i < strlen(t); ++i) {
        while (t[i]!=' '){
            for (int l = 0; l < strlen(w); ++l) {
                if (w[++k]==t[i]){
                    if (j=-1) {
                        First = i;
                        j = 0;
                    }
                }
            }
        }
        if (t[i]==' '){
            k=0;
            Counter++;
        }
    }
    cout<<Counter<<"\t"<<First;
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