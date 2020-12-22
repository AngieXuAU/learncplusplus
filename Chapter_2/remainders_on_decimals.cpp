#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int k;
	double a, b, r;
	cin>>a>>b;
	k=int(a/b);
	r=a-b*k;
	cout<<"K = "<<k<<endl<<"R = "<<r;
	return 0;
}
