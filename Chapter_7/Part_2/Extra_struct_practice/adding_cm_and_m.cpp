#include <cstdio>
struct Length{
    int Centimetres;
    int Metres;
    float Total;
};
struct Length Distance1;
float Add(float a, float b){
    a/=100;
    return a+b;
}
int main(){
    float Centimetres, Metres;
    scanf("%f", &Centimetres);
    scanf("%f", &Metres);
    Distance1.Total=Add(Centimetres, Metres);
    printf("Total distance: %f metres", Distance1.Total);
    return 0;
}