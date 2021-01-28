#include <iostream>
using namespace std;
int FibSum(int Index){
    if (Index==0){
        return 0;
    } else if (Index==1){
        return 1;
    } else {
        int Result = FibSum(Index-1) + FibSum(Index-2);
        return Result;
    }
}
int main(){
    int Input;
    cin>>Input;
    for (int i = 0; i < Input; ++i){
        cout<<FibSum(i)<<" ";
    }
    return 0;
}