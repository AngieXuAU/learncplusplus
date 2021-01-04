#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	for(char letter='a'; letter<='z'; letter+=2){
		cout<<setw(3)<<letter;
	}
	cout<<endl;
	for(char letter='z'; letter>='a'; letter-=2){
		cout<<setw(3)<<letter;
	}
	return 0;
}
