#include<iostream>
using namespace std;
int main(){
	int Input, Lines, Character;
	cin>>Input;
	for(Lines=1; Lines<=Input; (++Lines)){
		for(Character=1;Character<=Lines;(++Character)){
			cout<<"*";
		}
	cout<<endl;
	}
}
