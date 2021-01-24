#include <iostream>
using namespace std;
int Total, Base;
int Xn(int);
int main(){
    int Index;
    cin>>Base>>Index;
    Xn(Index);
    cout<<Base<<'^'<<Index<<'='<<Total<<endl;
    return 0;
}
int Xn(int n){
    if (n==0){
        Total=1;
    } else {
        Xn(n-1);
        Total*=Base;
    }
    return Total;
}