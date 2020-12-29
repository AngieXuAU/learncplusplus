#include<iostream>
#include<iomanip>
const int n=10;
using namespace std;
int a[n];
int main(){
	cout<<"Read "<<n<<" data: "<<endl;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
			cout<<setw(3)<<a[i];
	}
	return 0;
}
