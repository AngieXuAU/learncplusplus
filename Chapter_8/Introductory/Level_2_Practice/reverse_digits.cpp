#include <iostream>
using namespace std;
int Reverse(int original, int reversed){
    if (original<10){
        reversed=reversed*10+original;
        return reversed;
    } else {
        reversed=reversed*10+original%10;
        original=(original-(original%10))/10;
        return Reverse(original, reversed);
    }
}
int main(){
    int InputOriginal;
    cout<<"Input the original number:"<<endl;
    cin>>InputOriginal;
    cout<<"Reversed of "<<InputOriginal<<" is "<<Reverse(InputOriginal, 0);
}