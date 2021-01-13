#include <iostream>
using namespace std;
void Swap(int &a, int &b){
    int Temp=a;
    a=b;
    b=Temp;
    return;
}
int main(){
    int c=1, d=2;
    Swap(c,d);
    cout<<c<<" "<<d<<endl;
    return 0;
}

