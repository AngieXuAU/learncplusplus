#include<iostream>
using namespace std;
int main(){
	int c, x, y;
	cout<<"Write down c: ";
	cin>>c;
	for(x=0; x<=c; x++){
		for(y=0; y<=1000; ++y){
		if(x*y==c){
			cout<<x<<"\t"<<y<<endl;
		}
		}
	}
}
