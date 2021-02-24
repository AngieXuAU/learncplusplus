#include <cstdio>
int main(){
    int In1, In2, Sum, Product, *p1, *p2;
    p1=&In1;
    p2=&In2;
    In1=10;
    In2=20;
    Sum=*p1+*p2;
    Product=*p1**p2;
    printf("a = %d, b = %d\n", *p1, *p2);
    printf("Sum = %d, Product = %d\n", Sum, Product);
    return 0;
}