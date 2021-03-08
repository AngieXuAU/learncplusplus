#include <cstdlib>
#include <iostream>
using namespace std;
const int Total=10, Maximum=43;
int main(){
    for (int i = 0; i < Total; ++i) {
        cout<<rand()%Maximum<<"\n";
    }
}