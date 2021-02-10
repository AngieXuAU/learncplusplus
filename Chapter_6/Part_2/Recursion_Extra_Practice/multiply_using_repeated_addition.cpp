#include <cstdio>
int Product=0;
int Multiply(int a, int b){;
    if(b==0){
        return Product;
    } else {
        Product+=a;
        Multiply(a, (--b));
    }
}
int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d",Multiply(A, B));
    return 0;
}