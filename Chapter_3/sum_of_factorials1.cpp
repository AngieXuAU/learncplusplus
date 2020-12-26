#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int s=0, t=1, in;
//	for(int i=1; i<=10; ++i){
//		int t=1;
//		for(int j=1; j<=i; ++j){
//			t*=j;
//		}
//		s+=t;
//	}
	cin>>in;
	for(int i=1; i<=in; ++i){
		t*=i;
		s+=t;
	}
	cout<<s;
	return 0;
}
