#include<iostream>
using namespace std;
int main(){
	long int Number, Sum=0, Rep;
	for(Number=1; Number<100; Number++){
		if(Number/7.0!=0 && Number%10!=7){
			Rep=Number*Number;
			Sum+=Rep;
		}
	}
	cout<<Sum;
}
