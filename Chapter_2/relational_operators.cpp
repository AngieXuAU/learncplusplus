#include <iostream>
using namespace std;
int main()
{
	int n1=4, n2=5, n3;
//	n3=n1>n2;
//	cout<<n3<<endl;
//	n3=n1<n2;
//	cout<<n3<<endl;
//	n3=n1==4;
//	cout<<n3<<endl;
//	n3=n1!=4;
//	cout<<n3<<endl;
//	n3=n1==1+3;
//	cout<<n3<<endl;
//	n3=(3&&2);
//	cout<<n3<<endl;
//	n3=(n1==3)&&(n2==5)&&((n2-n1)==1);
//	cout<<n3<<endl;
//	n3=(++n2==5)&&(++n1==5);
//	cout<<n1<<"\t"<<n2<<"\t"<<n3<<endl;
	n3=(++n1==5)||(++n2==6);
	cout<<n1<<"\t"<<n2<<"\t"<<n3<<endl;
	n3=(++n2==7)||(++n1==5);
	cout<<n1<<"\t"<<n2<<"\t"<<n3<<endl;
}
