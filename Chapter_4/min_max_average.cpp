#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int x, n=0, min, max, s=0;
	while(scanf("%d,", &x)==1){
		if(n==0){
			min=max=x;
		} else {
			min=x<min? x:min;
			max=x>max? x:max;
		}
		s+=x;
		++n;
	}
	printf("%d %d %.3lf\n", min, max, (double)s/n);
	return 0;
}
