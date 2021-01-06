#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	char inputsentence[200];
	int i=0;
	gets(inputsentence);
	
	while(inputsentence[i]!='\0'){
		if(!(i>0 && inputsentence[i]==' ' && inputsentence[i-1]==' ')){
			cout<<inputsentence[i];
		}
		i++;
	}
	return 0;
}
