#include<iostream>

using namespace std;
void increment(int &n){
    n++;
}

int increment_1(int n) {
    return n+1;
}

int main() {
    int i = 3;
    increment(i);
//    i = increment_1(i+1);
//    cout<<i;
    return 0;
}

#include<iostream>

using namespace std;
void increment(int &n){
    n++;
}

int increment_1(int n) {
    return n+1;
}

int main() {
    int i = 3;
    increment(i);
//    i = increment_1(i+1);
//    cout<<i;
    return 0;
}

