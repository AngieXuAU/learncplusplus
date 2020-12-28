#include<iostream>
using namespace std;
int main(){
	int Chick, Hen, Rooster;
	for(Rooster=0;Rooster<=100/5;Rooster++){
		for(Hen=0;Hen<=100/3;Hen++){
			for(Chick=0;Chick<=3*100;Chick++){
				if(5*Rooster+3*Hen+Chick/3.0==100 && Rooster+Hen+Chick==100){
					cout<<Rooster<<" "<<Hen<<" "<<Chick<<endl;
				}
			}
		}
	}
	return 0;
}
