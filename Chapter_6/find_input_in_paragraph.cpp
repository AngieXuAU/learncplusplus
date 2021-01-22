#include <cstring>
#include <iostream>
using namespace std;
bool Check(char text[], char word[], int start_position, int end_position){
    if (end_position - start_position + 1 != strlen(word)) {
        return false;
    }
    for (int i = 0; i < strlen(word); ++i) {
        if (word[i] != text[i+start_position]){
            return false;
        }
    }
    return true;
}
void Find(char Word[], char Text[]){
    bool Matched= false;
    int Counter=0, Start, End;
    for (Start = 0; Start < strlen(Text); Start++) {
        if (Text[Start] != ' ') {
            End=Start+strlen(Word)-1;
            if (Check(Text, Word, Start, End)) {
                Counter++;
                if (!Matched) {
                    cout<<Start;
                    Matched = true;
                }
            }
        }
    }
    cout<<"\t"<<Counter;
}

int main(){
    char Word[10], Text[200];
    gets(Word);
    strlwr(Word);
    gets(Text);
    strlwr(Text);
    Find(Word, Text);

//    char word[10] = "is";
//    char text[200] = "this is a test";
//    cout<<Check(text, word, 5,6);
    return 0;
}