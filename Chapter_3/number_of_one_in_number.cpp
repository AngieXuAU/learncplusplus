#include<iostream>
using namespace std;
int main(){
	int Numeral, i, Sum=0;
	cin>>Numeral;
	i=Numeral;
	while(i>0){
		if(i%10==1){
			Sum+=1;
		}
		i/=10;
	}
	cout<<Sum;
}
