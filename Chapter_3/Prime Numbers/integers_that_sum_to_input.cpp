#include<iostream>
using namespace std;
int main(){
	int i, j, Limit, Portion1, Portion2;
	cin>>Limit;
	for(i=1; i<=Limit; i++){
		Portion1=i;
		for(j=1; j<=Limit; j++){
			Portion2=j;
			if(Portion1+Portion2==Limit){
				cout<<Portion1<<"\t"<<Portion2<<endl;
			}
		}
	}
}
