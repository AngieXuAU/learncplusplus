#include<iostream>
using namespace std;
int main(){
	int Denom;
	double Frac=1.0, Sum=1.0;
	cin>>Denom;
	for(int i=1;i<=Denom;++i){
		Frac*=i;
		Sum+=(1/Frac);
	}
	printf("%.10f", Sum);
	return 0;
}
