#include<iostream>
using namespace std;
int main(){
	int sum=0, payment=1, i=1, j=i, input;
	cin>>input;
	while(input-->0){
		sum+=payment;
		cout<<payment<<" "<<input<<" "<<sum<<endl;
		if(i==j){
			payment++;
			i++;
			j=1;
		} else {
			j++;
		}
	}
}
