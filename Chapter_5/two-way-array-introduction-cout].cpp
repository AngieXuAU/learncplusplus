#include<iostream>
using namespace std;
int Integers[3][3];
int main(){
	int k=1;
	for(int j=0; j<3; j++){
		for(int i=0; i<3; i++){
			Integers[j][i]=k;
			k++;
		}
	}
	
	for(int j=0; j<3; j++){
		for(int i=0; i<3; i++){
			cout<<Integers[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
