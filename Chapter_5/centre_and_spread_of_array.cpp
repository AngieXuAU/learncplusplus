#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main(){
	float MaxNumber=0.0, MinNumber=0.0, Difference, MaxDifference=0.0, Average, Sum=0.0;
	int Inputs;
	cin>>Inputs;
	float Number[Inputs];
	
	for(int i=0; i<Inputs; i++){
		cin>>Number[i];
		if(Number[i]>MaxNumber){
			MaxNumber=Number[i];
		}
		if(Number[i]<MinNumber){
			MinNumber=Number[i];
		}
		Sum+=Number[i];
	}
	Sum=Sum-MaxNumber-MinNumber;
	Average=Sum/(Inputs-2);
	printf("%.2f", Average);
	
	for(int i=0; i<Inputs; i++){
		Difference=abs(Number[i]-Average);
		if(Difference>MaxDifference){
			MaxDifference=Difference;
		}
	}
	printf(" %.2f", MaxDifference);
}
