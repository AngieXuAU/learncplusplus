#include <iostream>
using namespace std;
int main(){
    int a=2;
    int *p;
    p=&a;
    *p=20;
    cout<<a;
}