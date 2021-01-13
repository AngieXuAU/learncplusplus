#include<iostream>
using namespace std;
void Sort(int a[], int n){
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(a[j+1]>a[j]){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    int Array[10]={11, 4, 55, 6, 77, 8, 9, 0, 7, 1};
    cout<<"Before sorting: ";
    for (int i = 0; i < 10; ++i) {
        if(i!=9){
            cout<<Array[i]<<", ";
        } else {
            cout<<Array[i]<<endl;
        }
    }
    Sort(Array, 10);
    cout<<"After sorting: ";
    for (int i = 0; i < 10; ++i) {
        if(i!=9){
            cout<<Array[i]<<", ";
        } else {
            cout<<Array[i]<<endl;
        }
    }
}