#include<iostream>
using namespace std;
int main(){
	int MinN, MaxN, Input;
	cin>>Input;
	
	int Numbers[Input];
	
	for(int i=0; i<Input; i++){
		cin>>Numbers[i];
	}
	
	MaxN=Numbers[0];
	MinN=Numbers[0];
	for(int i=0; i<Input; i++){
		if(Numbers[i]>MaxN){
			MaxN=Numbers[i];
		}
		if(Numbers[i]<MinN){
			MinN=Numbers[i];
		}
	}
	
	cout<<MaxN-MinN;
}
