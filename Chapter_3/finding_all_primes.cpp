#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int Integer2;
	cin>>Integer2;
	for(int i=1; i<=Integer2; ++i){
		int x=2;
		while(x<=floor(sqrt(i)) && (i%x!=0)){
			++x;
		}
		if(x>floor(sqrt(i))){
			cout<<i<<"\t";
		}
	}
	return 0;
}
