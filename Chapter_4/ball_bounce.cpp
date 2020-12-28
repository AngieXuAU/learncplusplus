#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int Bounces;
	float Height, Distance;
	cin>>Height;
	Distance=Height;
	for(Bounces=0; Bounces<=9; Bounces++){
		Distance+=Height;
		Height/=2;
	}
	printf("%.4f\n%.4f", Height, Distance);
}
