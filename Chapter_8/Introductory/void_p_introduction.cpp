#include <iostream>
using namespace std;
int A=10;
float B=3.5;
void *p;
int main(){
    p=&A;
    cout<<*(int *)p<<endl;
    p=&B;
    cout<<*(float *)p<<endl;
}