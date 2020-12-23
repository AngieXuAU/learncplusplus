#include<iostream>
using namespace std;
int main()
{
	int d, t, t1, t2, v;
	cout<<"Insert first two terms and term number: ";
	cin>>t1>>t2>>t;
	d=t2-t1;
	v=t1+(--t)*d;
	cout<<"Term "<<(++t)<<" = "<<v;
}
