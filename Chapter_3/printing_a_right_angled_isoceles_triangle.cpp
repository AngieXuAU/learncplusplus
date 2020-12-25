#include<iostream>
using namespace std;
int main(){
	int i, l, c;
	cin>>i;
	for(l=1; l<=i; (++l)){
		for(c=1; c<=l; (++c)){
			cout<<"*";
		}
		cout<<endl;
	}
}
