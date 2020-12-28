#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int Index, Sum=0, n, Rep, Base;
	cin>>Base>>n;
	Rep=Base;
		for(Index=n-1; Index>0; (Index--)){
			Base*=Rep;
			Sum+=Base;
		}
	Sum=Sum+Rep+1;
	cout<<Sum;
}
