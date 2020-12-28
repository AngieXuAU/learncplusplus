#include<cstdio>
#include<iostream>
using namespace std;

// while(scanf("%d", &x)==1)

int a[100];
int main(){
	int x, n=0;
	while(scanf("%d", &x)==1){
		a[n++]=x;
	}
	for(int i=n-1; i>=0; --i){
		printf("%d\t", a[i]);
	}
	return 0;
}

