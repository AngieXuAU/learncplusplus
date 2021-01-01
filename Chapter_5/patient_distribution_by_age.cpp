#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int i, j, Youth=0, YoungAdult=0, MatureAdult=0, Elderly=0, Cases, PatientAge;
	float Percentage;
	cin>>Cases;
	for(i=0; i<Cases; i++){
		cin>>PatientAge;
		if(PatientAge<=18){
			Youth++;
		} else if(PatientAge>=19 && PatientAge<=35){
			YoungAdult++;
		} else if(PatientAge>=36 && PatientAge<=60){
			MatureAdult++;
		} else {
			Elderly++;
		}
	}
	Percentage=1.0*Youth/Cases*100;
	printf("%.2f\%\n", Percentage);
	
	Percentage=1.0*YoungAdult/Cases*100;
	printf("%.2f\%\n", Percentage);
	
	Percentage=1.0*MatureAdult/Cases*100;
	printf("%.2f\%\n", Percentage);
	
	Percentage=1.0*Elderly/Cases*100;
	printf("%.2f\%\n", Percentage);
}
