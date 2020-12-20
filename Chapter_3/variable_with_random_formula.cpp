#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	float a, b, c, d, x;
	cin>>a>>b>>c>>d>>x;
	float answer=a*x*x*x+b*x*x+c*x+d;
	printf("%.7lf", answer);
	return 0;
}
