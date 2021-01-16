#include <iostream>
using namespace std;
int MaxN(int x, int y, int z){
    int Maximum;
    Maximum=x;
    Maximum= y>Maximum? y:Maximum;
    Maximum= z>Maximum? z:Maximum;
    return Maximum;
}
int main(){
    int a, b, c;
    double m;
    cin>>a>>b>>c;
    m=MaxN(a, b, c)/1.0*(MaxN(a+b, b, c)*MaxN(a, b, b+c));
    cout<<"m = "<<m;
}