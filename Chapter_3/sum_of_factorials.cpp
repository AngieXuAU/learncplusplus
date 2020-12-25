#include<iostream>
using namespace std;
int main(){
	int s=0, t=1;
//	for(int i=1; i<=10; ++i){
//		int t=1;
//		for(int j=1; j<=i; ++j){
//			t*=j;
//		}
//		s+=t;
//	}
	for(int i=1; i<=10; ++i){
		t*=i;
		s+=t;
	}
	cout<<s;
	return 0;
}
