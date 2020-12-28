#include<iostream>
#include<iomanip>
using namespace std;
//int main(){
//	for(int a=1;a<=9;++a){
//		for(int b=0;b<=9;++b){
//			for(int c=0;c<=9;++c){
//				if(a*a*a+b*b*b+c*c*c==a*100+b*10+c)
//				cout<<setw(6)<<a*100+b*10+c;
//			}
//		}
//	}
int main(){
	for(int m=100; m<=999; ++m){
		int a=m/100;
		int b=(m%100)/10;
		int c=m%10;
		if(a*a*a+b*b*b+c*c*c==m){
			cout<<setw(6)<<m;
		}
	}
}
