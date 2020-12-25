#include<iostream>
using namespace std;
int main(){
	int x=0;
	bool yes;
	yes=true;
	do {
		x+=7;
		if(x%2!=1 || x%3!=1 || x%4!=1 || x%5!=1 || x%6!=1 || x%7!=1){
			cout<<"All= "<<x;
		} 
	}
	while (yes==false);
	return 0;
}
