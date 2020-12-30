#include<iostream>
const int InputN=89;
using namespace std;
bool a[InputN+1];
int main(){
	int index=0, OutSum=0, Counter=0, InputM=5, n;
	for(n=0; n<=InputN; n++){
		a[n]=true;
	}
	while(OutSum<InputN){
		index++;
		if(index>n){
			index=1;
		}
		if(a[index]==false){
			continue;
		}
		Counter++;
		if(Counter>=InputM){
			a[index]=false;
			Counter=0;
			OutSum++;
			cout<<index<<"\t";
		}
	}
}
