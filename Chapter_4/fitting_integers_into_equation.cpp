#include<iostream>
using namespace std;
int main(){
	int a, b, c, x, y;
	cout<<"Write down a, b, c: ";
	cin>>a>>b>>c;
	for(x=0; x<=c; x++){
		for(y=0; y<=1000; ++y){
		if(a*x+b*y==c){
			cout<<"x = "<<x<<"\t"<<"y = "<<y<<endl;
		}
		}
	}
}
