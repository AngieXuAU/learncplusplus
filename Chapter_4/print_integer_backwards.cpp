#include<iostream>
using namespace std;
int main(){
	int Number, Digit;
	cin>>Number;
	while(Number!=0){
		Digit=Number%10;
		Number/=10;
		cout<<Digit<<", ";
	}
}
