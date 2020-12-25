#include<iostream>
using namespace std;
int main(){
	int n=0, s=0;
	while(s<=1000){
		++n;
		s+=n;
	}
	cout<<n;
	return 0;
}
