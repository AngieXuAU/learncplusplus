#include <iostream>
using namespace std;
bool IsEven(int x){
    if(x==0){
        return true;
    } else if(x==1){
        return false;
    } else {
        return IsEven(x-2);
    }
}
int main(){
    cout<<IsEven(101);
}