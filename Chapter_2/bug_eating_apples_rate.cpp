#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int TotalApples, EatenApples, EatRate, Hours;
	cout<<"Insert total apples, hours taken to eat an apple and hours passed: ";
	cin>>TotalApples>>EatRate>>Hours;
	EatenApples=ceil(Hours*1.0/EatRate);
	TotalApples=TotalApples-EatenApples;
	cout<<(TotalApples);
}
