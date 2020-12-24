#include<iostream>
using namespace std;
int main()
{
	int Dividend;
	cin>>Dividend;
	if(Dividend%3==0){
		cout<<3<<endl;
	} if(Dividend%5==0){
		cout<<5<<endl;
	} if(Dividend%7==0){
		cout<<7;
	} else {
		cout<<"n";
	}
}
