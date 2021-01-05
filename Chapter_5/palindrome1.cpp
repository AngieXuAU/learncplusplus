#include<iostream>
using namespace std;
int main(){
	char ch, letter[101];
	int i=0;
	bool flag=true;
	cout<<"Input a string: ";
	cin>>ch;
	
	
	while(ch!='.'){
		letter[i]=ch;
		cin>>ch;
		++i;
	}
	
	for(int j=0; j<=i/2; j++){
		if(letter[j]!=letter[i-1-j]){
			flag=false;
		}
	}
	if(flag==true){
			cout<<"Yes";
		} else {
			cout<<"No";
		}
}
