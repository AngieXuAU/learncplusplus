#include<iostream>
using namespace std;
int a[100];
int main(){
	int largest, n, v, w, x, y, z;
	cout<<"Read "<<n<<" data: "<<endl;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	largest=a[1];
	int location = 1;
	for(int i=0; i<n; i++){
		if (a[i+1]> largest){
			location = i+1;
			largest = a[i+1];
		}
	}
	cout<<largest<<" "<<location;
}
