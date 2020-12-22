#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cin>>x>>y;
	float a=(86*x+85*y)*1.0/(x+y);
	printf("%.1lf", a);
}
