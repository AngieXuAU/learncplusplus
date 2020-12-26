#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int Rows, Columns, Parity;
	char Ch;
	scanf("%d%d %c %d", &Rows, &Columns, &Ch, &Parity);
//	cout<<Rows<<Columns<<Ch<<Parity;
	for(int i=1; i<=Rows; i++){
		for(int in=1; in<=Columns; in++){
//			if(Parity ==1 || i==1 || i==Rows || in==1 || in==Columns){
//				cout<<Ch;
//			} else {
//				cout<<" ";
//			}
			printf("%c", (Parity ==1 || i==1 || i==Rows || in==1 || in==Columns? Ch:' '));
			//cout<<(Parity ==1 || i==1 || i==Rows || in==1 || in==Columns? Ch:' ');
		}
		cout<<endl;
	}
}
