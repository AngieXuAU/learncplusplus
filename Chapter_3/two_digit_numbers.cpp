#include<iostream>
using namespace std;
int main(){
	int Integer, Digits;
	cin>>Integer;
	Digits=((Integer>=10 && Integer<100)? 1:0);
	cout<<Digits;
}
