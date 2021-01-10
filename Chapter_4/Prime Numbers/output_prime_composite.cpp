#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int numeral, integers;
	cin>>numeral;
	for(integers=1; integers<=numeral; integers++){
	}
	if(int(sqrt(numeral))%integers!=0){
			cout<<"Prime";
	} else {
			cout<<"Composite";
	}
}
