#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand((unsigned) time(0));
	int i, j, number, Sum=0;
	float Average;
	cout<<"Find the average of these sets of numbers: "<<endl;
	for(i=1; i<=10; i++){
		for(j=1; j<=i+4 && j<=12; j++){
			number=(rand() % 40+10);
			Sum+=number;
			if(j==1){
				cout<<number;
			} else {
				cout<<",  "<<number;
			}
		}
		Average=Sum*1.0/(i+4);
		cout<<":"<<endl;
		printf("%.1f\n", Average);
		Sum=0;
	}
}
