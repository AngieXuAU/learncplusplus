#include <cstdio>
int Factorial(int);
int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d", Factorial(m-n)*Factorial(n));
}
int Factorial(int x){
    int Product=1;
    for (int i = 1; i <=x ; ++i) {
        Product*=i;
    }
    return Product;
}