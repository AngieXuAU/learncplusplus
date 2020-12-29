#include<iostream>
const int n=10;
using namespace std;
int a[n];
int main(){
	int i, j, k, temp;
	for(int n=0; n<10; n++){
		cin>>a[n];
	}
	for(j=0; j<9; j++){
		for(i=0; i<9; i++){
			if(a[i+1]>a[i]){
				temp=a[i+1];
				a[i+1]=a[i];
				a[i]=temp;
			}
		}
	}
	for(k=0; k<=9; k++){
		cout<<a[k]<<"\t";
	}
	
}
