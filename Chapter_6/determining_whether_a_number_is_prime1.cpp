#include <cstdio>
#include <cmath>
using namespace std;
int Prime(int x);
int main(){
    int n;
    scanf("%d", &n);
    if (Prime(n)){
        printf("%s", "Yes");
    } else {
        printf("%s", "No");
    }
    return 0;
}
int Prime(int x) {
    int  Primary= 1;
    for (int i = 2; i <= sqrt(x); ++i) {
        if (x%i==0){
            Primary= 0;
        }
    }
    return Primary;
}