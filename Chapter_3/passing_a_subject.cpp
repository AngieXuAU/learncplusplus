#include<iostream>
using namespace std;
int main(){
	int English, Mathematics;
	cin>>English>>Mathematics;
	if((English>=60 && Mathematics<=60) || (English<=60 && Mathematics>=60)){
		cout<<"1";
	} else {
		cout<<"0";
	}
}
