#include<iostream>
using namespace std;
int main(){
	int i, j, x, z, sum=0;
	cin>>x;
	int a[x];
	for(i=0; i<x; i++){
		cin>>a[i];
	}
	cin>>z;
	for(j=0; j<x; j++){
		if(a[j]==z){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
