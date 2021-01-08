#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
	int Number[10]={0};
	char Input[255];
	gets(Input);
	
	for(int i=0; i<=strlen(Input); ++i){
		if(int(Input[i])>=48 && int(Input[i])<=57){
			Number[int(Input[i])-48] += 1;
		}
//		switch(Input[i]){
//			case '0':
//				Number[0]+=1;
//				break;
//			case '1':
//				Number[1]+=1;
//				break;
//			case '2':
//				Number[2]+=1;
//				break;
//			case '3':
//				Number[3]+=1;
//				break;
//			case '4':
//				Number[4]+=1;
//				break;
//			case '5':
//				Number[5]+=1;
//				break;
//			case '6':
//				Number[6]+=1;
//				break;
//			case '7':
//				Number[7]+=1;
//				break;
//			case '8':
//				Number[8]+=1;
//				break;
//			case '9':
//				Number[9]+=1;
//				break;
//		}
	}
	
	for(int j=0; j<10; j++){
		cout<<j<<"\t"<<Number[j]<<endl;
	}
}
