#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float Float, absValue;
	cout<<"Write a float: ";
	cin>>Float;
	if(Float>=0){
		absValue=Float;
	} else {
		absValue=(-1.0*Float);
	}
	printf("%.2f", absValue);
}
