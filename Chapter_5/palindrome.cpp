#include<iostream>
using namespace std;
int main(){
	char ch, letter[101];
	int i=0, j=1;
	
	cout<<"Input a string: ";
	cin>>ch;
	
	while(ch!='.'){
		++i;
		letter[i]=ch;
		cin>>ch;
	}
	
	while((j<i) && (letter[j] == letter[i])){
		--i;
		++j;
	}
	if(j>=i){
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl;
	}
	return 0;
}
