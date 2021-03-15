#include <iostream>
using namespace std;
int main(){
    int a[5]={1, 2, 3, 4, 5}, i, *pa=a;
    cout<<*(a+3);
    cout<<a<<" "<<&a[0]<<" "<<pa;
    int *b=a;
    cout<<b;
    return 0;
}