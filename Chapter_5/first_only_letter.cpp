#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int Letter[26];
	char Input[100000];
	gets(Input);
	
	for(int i=0; i<=strlen(Input); ++i){
		Letter[int(Input[i])-97]+=1;
	}
	
	for(int i=0; i<=26; ++i){
		if(Letter[i]==1){
			cout<<char(i+97);
			return 0;
		}
	}
	
	cout<<"No";
}
