#include <cstdio>
int a[101], n;
int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int *p=&a[0];
    for (int i = 0; i < n; ++i) {
        printf("%d\t", *p);
        p++;
        printf("%d\n", p);
    }
    return 0;
}