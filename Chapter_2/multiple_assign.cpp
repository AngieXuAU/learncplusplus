#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	int d = 1233545;
	a = b = c = (++d);
	cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d;
	return 0;
}
