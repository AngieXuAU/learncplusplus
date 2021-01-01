#include<iostream>
using namespace std;
int main(){
	int Inputs, Match;
	cin>>Inputs;
	int a[Inputs];
	for(int i=0; i<Inputs; i++){
		cin>>a[i];
	}
	cin>>Match;
	
	for(int i=0; i<Inputs; i++){
		if(a[i]==Match){
			cout<<i+1;
			return 0;
		}
	}
	cout<<-1;
}
