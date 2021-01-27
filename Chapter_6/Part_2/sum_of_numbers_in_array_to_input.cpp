#include <iostream>
using namespace std;

bool Flag;
const int Max1=51;
int a[Max1], n, m;
void Sum(int, int);

int main(){
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        a[i]=i;
    }
    cin>>m;
    Flag= false;
    Sum(n, m);
    if (Flag){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}

void Sum(int n, int m){
    if (a[n]==m){
        Flag= true;
    } else if (n==1){
        return;
    } else {
        Sum(n-1, m-a[n]);
        Sum(n-1, m);
    }
}