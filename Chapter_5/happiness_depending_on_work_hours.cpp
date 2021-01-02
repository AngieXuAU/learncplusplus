#include<iostream>
using namespace std;
int main(){
	int Work, School, Extra, Index, MaxWork=0;
	for(int i=1; i<=7; i++){
		cin>>School>>Extra;
		Work=School+Extra;
		if(Work>MaxWork){
			MaxWork=Work;
			Index=i;
		}
	}
	
	if(MaxWork>8){
		cout<<Index;
	} else {
		cout<<0;
	}
	return 0;
}
