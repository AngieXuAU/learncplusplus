#include<iostream>
using namespace std;
int main(){
	int Numerals, Sum=0, Product, b;
	cin>>Numerals;
	int a[Numerals];
	for(int i=0; i<Numerals; i++){
		cin>>a[i];
	}
	for(int i=0; i<Numerals; i++){
		cin>>b;
		Sum+=a[i]*b;
	}
	cout<<Sum;
}
