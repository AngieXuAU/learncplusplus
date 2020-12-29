#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
bool a[101];
int main(){
	int i, j, k, l;
	for(l=0; l<=100; l++){
		a[l]=true;
	}
	for(i=2; i<=sqrt(100); i++){
		if(a[i]==false){
			continue;
		}
		for(j=i*i; j<=100; j+=i){
			a[j]=false;
		}
	}
	for(k=2; k<=100; k++){
		if(a[k]==true){
			cout<<k<<"\t";
		}
	}
}
