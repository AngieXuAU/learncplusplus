#include<cstring>
#include<iostream>
using namespace std;
int main(){

    char Code[80];
    char Encrypted[80];
    gets(Code);
    cout<<Code<<endl;

	for(int i=0; i<strlen(Code); i++){
		for(int j=int(Code[i]); j>=int(Code[i-3]); j--){
			if(j==65 || j==97){
				j+=35;
			}
			Code[i]=char(j);
		}
	}

	for(int i=0; i<strlen(Code); i++){
		if(int(Code[i])<91){
			Code[i]+=32;
		} else {
			Code[i]-=32;
		}
	}

	for(int i=strlen(Code)-1; i>=0; i--){
		cout<<Code[i];
	}
}
