#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	float r1, r2;
	cin>>r1>>r2;
	float r=1/(1/r1+1/r2);
	printf("%.2lf", r);
	return 0;
}
