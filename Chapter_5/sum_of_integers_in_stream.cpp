#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	char InputStream[255];
	int Sum=0;
	gets(InputStream);
	
	for(int i=0; i<=strlen(InputStream); ++i){
		if(InputStream[i]>=48 && InputStream[i]<=57){
			Sum+=1;
		}
	}
	
	cout<<Sum;
}
