#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int GridA[10][10];
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(j==i || j==0){
				GridA[i][j]=1;
			} else {
				GridA[i][j]=GridA[i-1][j]+GridA[i-1][j-1];
			}
		}
	}
	
	for(int i=0; i<10; i++){
		for(int j=0; j<=i; j++){
			printf("%5d", GridA[i][j]);
		}
		cout<<endl;
	}
}
