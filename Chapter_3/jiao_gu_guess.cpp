#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int Number;
	cin>>Number;
	while(Number!=1){
		if(Number%2==0){
		Number/=2;
		} else {
			Number=Number*3+1;
		}
	cout<<Number<<", ";
	}
	cout<<"End";
}
