#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int i, j, Limit, Portion1, Portion2, x=2;
	cin>>Limit;
	for(i=1; i<=Limit; i++){
		Portion1=i;
		for(j=1; j<=Limit; j++){
			Portion2=j;
			for(x=2; x<=floor(sqrt(i)); x++)
				if(Portion1*Portion2==Limit && (x<=floor(sqrt(i)) && (i%x!=0))){
					cout<<Portion1<<"\t"<<Portion2<<endl;
				}
		}
	}
}
