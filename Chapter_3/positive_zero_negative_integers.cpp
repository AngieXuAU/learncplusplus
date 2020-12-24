#include<iostream>
using namespace std;
int main(){
	int Integer;
	cout<<"Write an integer: ";
	cin>>Integer;
	if(Integer>0){
		cout<<"Positive";
	} else if(Integer==0){
		cout<<"Zero";
	} else {
		cout<<"Negaive";
	}
}
