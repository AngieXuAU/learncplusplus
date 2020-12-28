#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int DoorN[100]={};
int main(){
	int Divisor, Parity, Index;
	for(Divisor=1; Divisor<=100; Divisor++){
		for(Index=1; Index<=100; Index++){
			if(Index%Divisor==0){
				DoorN[Index-1] = !DoorN[Index-1];
			}
		}
	}
	for(Index=0; Index<100l; Index++){
		if(DoorN[Index]==1){
		cout<<setw(4)<<Index+1;
		}
	}
	return 0;
}
