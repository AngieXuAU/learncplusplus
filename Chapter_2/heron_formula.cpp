#include<cstdio>
#include<math.h>
int main()
{
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	float p=(a+b+c)/2;
	float s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%0.3f\n", s);
}