#include <iostream>
using namespace std;
int Total=0;
int Sum(int Input){
    if (Input==1){
        Total+=1;
        return Total;
    } else {
        Total+=Input;
        Sum(--Input);
    }
}
int main(){
    int N;
    cin>>N;
    cout<<Sum(N);
    return 0;
}