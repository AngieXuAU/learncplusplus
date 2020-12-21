#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	char c='B';
	putchar(c);
	putchar('\x42');
	putchar(0x42);
	putchar(66);
}
