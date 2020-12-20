#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	float f;
	cin>>f;
	float celsius=5*(f-32)/9;
	printf("%.5lf", celsius);
	return 0;
}
