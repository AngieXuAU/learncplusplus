#include <cstdio>
int Multiply(int a, int b){
    int Product=1;
    if(b==0){
        return Product;
    } else {
        Product*=a;
        Multiply(a, b--);
    }
}
int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    printf("The product of %d and %d is %d", A, B, Multiply(A, B));
    return 0;
}