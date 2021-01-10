#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    char String1[200], String2[200];
    gets(String1); gets(String2);

    if(strlen(String1)>=strlen(String2)){
        cout<<(strstr(String1, String2) != NULL? "s2 is substring of s1":"No substring");
    } else {
        cout<<(strstr(String2, String1) != NULL? "s1 is substring of s2":"No substring");
    }
}