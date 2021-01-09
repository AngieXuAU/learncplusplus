#include<cstring>
#include<iostream>
using namespace std;
int main(){
	bool Parity=true;
	char VariableName[20];
	gets(VariableName);
	
	if(int(VariableName[0])<65 || (int(VariableName[0])>90 && int(VariableName[0])<97) || int(VariableName[0])>122){
		Parity=false;
	}
	
	for(int i=0; i<strlen(VariableName); i++){
		if(int(VariableName[i])<48 || (int(VariableName[i])>57 && int(VariableName[i])<65) || (int(VariableName[i])>90 && int(VariableName[i])<97) || int(VariableName[i])>123){
			Parity=false;
		}
	}
	
	if(Parity==true){
		cout<<"Yes";
	} else {
		cout<<"No";
	}
	return 0;
}
