#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int Length, Width, Parity;
	char Ch;
	scanf("%d%d %c %d", &Length, &Width, &Ch, &Parity);
//	cout<<Length<<Width<<Ch<<endl;
	if(true){
		for(int i=1; i<=Length; i++){
			for(int in=1; in<=Width; in++){
				cout<<Ch;
			}
			cout<<endl;
		}
	} else {
		cout<<Ch;
		cout<<endl;
//		for(int i=1; i<=Lenght; i++){
//			cout<<" ";
//		}
	}
}
