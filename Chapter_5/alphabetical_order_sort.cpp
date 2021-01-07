#include<cstdio>
#include<iostream>
#include<cstring>
const int Number=3;
using namespace std;
int main(){
	char t[20], cname[Number][20];
	for(int i=0; i<Number; i++){
		gets(cname[i]);
	}
	for(int i=0; i<Number; i++){
		int k=i; 
		for(int j=i+1; j<Number; ++j){
			if(strcmp(cname[k],cname[j])>0){
				k=j;
			}
		}
		strcpy(t, cname[i]);
		strcpy(cname[i], cname[k]);
		strcpy(cname[k], t);
	}
	for(int i=0; i<Number; i++){
		cout<<cname[i]<<endl;
	}
	return 0;
}
