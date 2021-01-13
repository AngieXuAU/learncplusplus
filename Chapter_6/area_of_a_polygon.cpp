#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
double Area(double, double, double);
int main(){
    double Sum, b1, b2, b3, b4, b5, b6, b7;
    cout<<"Input seven side lengths: ";
    cin>>b1>>b2>>b3>>b4>>b5>>b6>>b7;

    Sum=Area(b1, b5, b6)+Area(b2, b6, b7)+Area(b3, b4, b7);
    printf("Sum = %10.3lf\n", Sum);
    return 0;
}
double Area(double a, double b, double c){
    double P=(a+b+c)/2;
    return sqrt(P*(P-a)*(P-b)*(P-c));
}