#include <cstdio>
int main(){
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int Temp, Sum=0;
    while (scanf("%d", &Temp)==1){
        Sum+=Temp;
    }
    printf("%d\n", Sum);
    fclose(stdin);
    fclose(stdout);
    return 0;
}