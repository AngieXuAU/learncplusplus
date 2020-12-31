#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int i, j, number;
	cout<<"Find the average of these sets of numbers: "<<endl;
	for(i=1; i<=10; i++){
		int maxn=i+4;
		for(j=5; j<=maxn; j++){
			number=(rand() % 40+10);
			cout<<number;
			if(j<maxn){
				cout<<", ";
			} else if (j==maxn){
				cout<<": "<<endl<<endl;
				continue;
			}
		}
	}
}
