#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x=2, i;
	cin>>i;
	while(x<=floor(sqrt(i)) && (i%x!=0)){
		++x;
	}
	if(x>floor(sqrt(i))){
		cout<<true;
	} else {
		cout<<false;
	}
}
