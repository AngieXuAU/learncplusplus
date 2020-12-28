#include<iostream>
using namespace std;
int main(){
	int Numeral, i, Sum=0;
	cin>>Numeral;
	for(i=0; i<=Numeral; i++){
		int n=i;
		while(n>0){
			if(n%10==1){
				Sum+=1;
			}
			n/=10;
		}
	}
	cout<<Sum;
}
