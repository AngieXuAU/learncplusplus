#include <iostream>
using namespace std;
int main()
{
	const double PI=3.14;
	double V;
	int h, r, t;
	cout<<"Height, radius in cm: "<<endl;
	cin>>h>>r;
	V=PI*r*r*h;
	t=20000/V;
	(++t);
	printf("%d", t);
}
