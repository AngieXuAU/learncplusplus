#include<iostream>
using namespace std;
int main(){
	int TreeTotal, JobN, Start, End, i, j, k, l, m, LivingTrees=0;
	cin>>TreeTotal>>JobN;
	bool TreeA[TreeTotal+1];
	for(m=0; m<=TreeTotal; m++){
		TreeA[m]=true;
	}
	for(l=1; l<=JobN; l++){
		cin>>Start>>End;
		for(i=1; i<=JobN; i++){
			for(j=Start; j<=End; j++){
				TreeA[j]=false;
			}
		}
	}
	for(k=0; k<=TreeTotal; k++){
		if(TreeA[k]==true){
			LivingTrees+=1;
		}
	}
	cout<<LivingTrees;
	return 0;
}
