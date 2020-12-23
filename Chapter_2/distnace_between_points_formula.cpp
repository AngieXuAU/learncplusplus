#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int ax, bx, ay, by;
	double d;
	cin>>ax>>ay>>bx>>by;
	d=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
	cout<<d;
}
