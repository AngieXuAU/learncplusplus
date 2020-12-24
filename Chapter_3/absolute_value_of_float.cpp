#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float Float;
	cout<<"Write a float: ";
	cin>>Float;
	if(Float>=0){
		cout<<Float;
	}
	if(Float<0){
		cout<<abs(Float);
	}
}
