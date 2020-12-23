#include<iostream>
using namespace std;
int main(){
	int Weight;
	float Cost;
	cout<<"Insert weight in kilograms: ";
	cin>>Weight;
	if(Weight<=20){
		Cost=Weight*1.68;
	} else {
		Cost=Weight*1.98;
	}
	printf("%.2f", Cost);
}
