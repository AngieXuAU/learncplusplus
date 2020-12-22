#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	const double PI=3.14;
	double V, r;
	cin>>r;
	V=(PI*r*r*r)*4/3;
	printf("V = %.2lf", V);
}
