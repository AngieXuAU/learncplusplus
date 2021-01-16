#include <iomanip>
#include <iostream>
using namespace std;
void Common(int x, int y);
int main(){
    int a, b;
    cin>>a>>b;
    Common(a, b);
}
void Common(int x, int y){
    int m=x, n=y, r;
    do {
        r=m%n;
        m=n;
        n=r;
    } while (r!=0);
    x/=m;
    y/=m;
    cout<<setw(5)<<x<<setw(5)<<y<<endl;
}