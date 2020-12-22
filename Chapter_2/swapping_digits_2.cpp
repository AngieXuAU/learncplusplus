#include <iostream>
using namespace std;
int main()
{
	int i, a, b, c;
	cin>>i;
	a=i/100;
	b=(i-100*a)/10;
	c=i-100*a-10*b;
	cout<<c<<b<<a;
}
