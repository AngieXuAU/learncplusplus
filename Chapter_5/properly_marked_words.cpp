#include<cstring>
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int Rows;
    scanf("%d%*c", &Rows);
    char Words[Rows][20];
    for(int r=0; r<Rows; r++){
        gets(Words[r]);
    }

    for(int i=0; i<=Rows; i++){ //control for rows
        for(int j=0; j<=strlen(Words[i]); j++){ //control for columns
            if(j==0){
                if(int(Words[i][j])>=97 && int(Words[i][j])<=122){
                    Words[i][j]-=32;
                }
            } else{
                if(int(Words[i][j])>=65 && int(Words[i][j])<=90){
                    Words[i][j]+=32;
                }
            }
        }
    }

    for(int i=0; i<Rows; ++i){
        cout<<Words[i]<<endl;
    }
    return 0;
}