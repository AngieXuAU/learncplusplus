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
    int j;
    if (x == 2) {
        return 1;
    }
    j = 2;
    while (j <= sqrt(x) && x % j != 0) {
        j++;
        if (x % j == 0) {
            return 0;
        } else {
            return 1;
        }
    }
}