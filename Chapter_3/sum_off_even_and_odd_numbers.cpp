#include<iostream>
using namespace std;
int main(){
	int i, sum1=0, sum2=0;
	for (i=1; 1<=100; i++)
		if(i%2==0) {
			sum1+=1;
		} else {
			sum2+=1;
		}
	cout<<sum1<<" "<<sum2;
	return 0;
}
