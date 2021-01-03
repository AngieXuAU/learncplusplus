#include<iostream>
using namespace std;
int GridA[4][4];
int main(){
	for(int j=0; j<4; j++){
		for(int i=0; i<4; i++){
			cin>>GridA[j][i];
		}
	}
	
	for(int j=0; j<4; j++){
		for(int i=0; i<4; i++){
			if(GridA[j][i]>0){
				cout<<j<<"\t"<<i<<"\t"<<GridA[j][i]<<endl;
			}
		}
	}
	return 0;
}
