#include<iostream>
using namespace std;
int Integers[6][6];
int main(){
	for(int j=0; j<6; j++){
		for(int i=0; i<6; i++){
			if(j==i || j+i==5){
				Integers[j][i]=1;
			} else {
				Integers[j][i]=0;
			}
		}
	}
	for(int j=0; j<6; j++){
		for(int i=0; i<6; i++){
			cout<<Integers[j][i]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
