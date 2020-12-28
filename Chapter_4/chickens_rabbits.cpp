#include<iostream>
using namespace std;
int main(){
	int Rabbits, Chickens;
	for(Rabbits=0;Rabbits<=20;Rabbits++){
		for(Chickens=0;Chickens<=20;Chickens++){
			if(4*Rabbits+2*Chickens==52 && Rabbits+Chickens==20){
				cout<<Rabbits<<" "<<Chickens;
			}
		}
	}
	return 0;
}
