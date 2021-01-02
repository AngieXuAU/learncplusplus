#include<iostream>
using namespace std;
int main(){
	int Sum=0, MaxN=0, Inputs, MaxNSum=0;
	
	cin>>Inputs;
	int A[Inputs];
	
	for(int i=1; i<=Inputs; i++){
		cin>>A[i];
		if(A[i]>MaxN){
			MaxN=A[i];
			Sum+=A[i];
			MaxNSum=MaxN;
		} else if(A[i]==MaxN){
			MaxNSum+=MaxN;
		}else {
			Sum+=A[i];
		}
	}
	
	cout<<Sum-MaxN;
}
