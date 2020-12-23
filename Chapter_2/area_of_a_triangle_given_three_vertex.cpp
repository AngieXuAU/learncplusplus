#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int ax, ay, bx, by, cx, cy;
	float s, a, b, c, x;
	cout<<"Insert coordinates of three points: ";
	cin>>ax>>ay>>bx>>by>>cx>>cy;
	a=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
	b=sqrt((bx-cx)*(bx-cx)+(by-cy)*(by-cy));
	c=sqrt((cx-ax)*(cx-ax)+(cy-ay)*(cy-ay));
	x=(a+b+c)/2;
	s=sqrt(x*(x-a)*(x-b)*(x-c));
	cout<<"Area = "<<s<<" units squared";
}
