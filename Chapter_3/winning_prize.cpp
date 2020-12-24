#include<iostream>
using namespace std;
int main(){
	int Luck, Encouragement;
	cin>>Luck>>Encouragement;
//	if(Luck>=10){
//		cout<<"YES";
//	}else if (Encouragement>=20){
//		cout<<"YES";
//	} else {
//		cout<<"NO";
//	}
	if((Luck>=10)||(Encouragement>=20)){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
}
