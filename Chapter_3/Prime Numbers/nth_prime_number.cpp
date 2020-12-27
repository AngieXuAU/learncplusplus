#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int Integer2, sum=0;
	cin>>Integer2;
	int i = 2;
	for(; sum<Integer2; ++i){
		int x=2;
		while(x<=floor(sqrt(i)) && (i%x!=0)){
			++x;
		}
		if(x>floor(sqrt(i))){
			sum+=1;
		}
	}
	cout<<i-1;
	return 0;
}
