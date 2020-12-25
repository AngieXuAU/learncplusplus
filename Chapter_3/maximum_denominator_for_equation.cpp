#include<iostream>
using namespace std;
int main(){
	int Denominator=1, Input;
	float Sn=1;
	cout<<"Write an integer lower than 15: ";
	cin>>Input;
	while(Sn<=Input){
		Sn+=float(1)/(++Denominator);
	}
	cout<<Denominator;
	return 0;
}
