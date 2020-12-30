#include<iostream>
using namespace std;
float BookPrice[10]={28.9, 32.7, 45.6, 78.0, 35.0, 86.2, 27.8, 43.0, 56.0, 65.0};
int main(){
	int j, Index, BookCount; 
	float Total=0.0, Product;	
	for(Index=0; Index<10; Index++){
		cin>>BookCount;
		Product=BookCount*BookPrice[Index];
		Total+=Product;
	}
	cout<<Total;
}
