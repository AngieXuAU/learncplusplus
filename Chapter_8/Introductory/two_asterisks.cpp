#include <cstdio>
int a=10;
int *p;
int **pp;
int main(){
    p=&a;
    pp=&p;
    printf("%d=%d=%d\n", a, *p, **pp);
    return 0;
}