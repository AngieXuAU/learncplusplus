#include<iostream>
using namespace std;
int main(){
	int Dividend;
	cin>>Dividend;
	if((Dividend%3==0) && (Dividend%5==0)){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
}
