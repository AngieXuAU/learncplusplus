#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	char A[200];
	char input, a, b;
	int n=0;
	
	do{
		input=getchar();
		if(input!='\n') {
			A[n++] = input;
		} else {
			A[n] = '\0';
			break;
		}
	} while (true);

//	do{
//		A[n++]=getchar();
//		cout<<A[n];
//	} while (A[n] != '\n');
//	
	a=getchar(); 
	getchar(); 
	b=getchar();
	
	for(int i=0; i<n; i++){
		if(A[i]==a){
			A[i]=b;
		}
	}
	cout<<A;
	return 0;
}
