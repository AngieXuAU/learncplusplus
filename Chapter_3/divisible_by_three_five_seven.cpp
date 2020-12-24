#include<iostream>
using namespace std;
int main()
{
	int Dividend;
	bool Flag=false;
	cin>>Dividend;
	if(Dividend%3==0){
		cout<<3<<endl;
		Flag=true;
	} 
	
	if(Dividend%5==0){
		cout<<5<<endl;
		Flag=true;
	} 
	
	if(Dividend%7==0){
		cout<<7;
		Flag=true;
	} 
	
	if(!Flag){
		cout<<"n";
	}
}
