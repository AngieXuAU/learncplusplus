#include<iostream>
using namespace std;
int main(){
	int k=1, N, M;
	cin>>N>>M;
	int Integers[N][M];
	
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			cin>>Integers[i][j];
		}
	}
	
	for(int j=0; j<N; j++){
	for(int i=0; i<M; i++){
		cout<<Integers[j][i]<<"\t";
	}
	cout<<endl;
	}
	return 0;
}
