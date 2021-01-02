#include<iostream>
using namespace std;
int main(){
	int Sum=0, MaxN=0, Inputs, MaxNSum=0, Number;
	
	cin>>Inputs;
	
	for(int i=1; i<=Inputs; i++){
		cin>>Number;
		if(Number>MaxN){
			MaxN=Number;
			Sum+=Number;
			MaxNSum=MaxN;
		} else if(Number==MaxN){
			MaxNSum+=MaxN;
		}else {
			Sum+=Number;
		}
	}
	
	cout<<Sum-MaxN;
}
