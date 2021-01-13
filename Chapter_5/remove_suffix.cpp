#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
    char Original[32];
    gets(Original);

    if(Original[strlen(Original)-1]=='y' && Original[strlen(Original)-2]=='l' && strlen(Original)>2){
        for(int i=0; i<strlen(Original)-2; i++){
            cout<<Original[i];
        }
    } else if(Original[strlen(Original)-1]=='r' && Original[strlen(Original)-2]=='e' && strlen(Original)>2){
        for(int i=0; i<strlen(Original)-2; i++){
            cout<<Original[i];
        }
    } else if(Original[strlen(Original)-1]=='g' && Original[strlen(Original)-2]=='n' && Original[strlen(Original)-3]=='i' && strlen(Original)>3){
        for(int i=0; i<strlen(Original)-3; i++){
            cout<<Original[i];
        }
    } else {
        puts(Original);
    }
}