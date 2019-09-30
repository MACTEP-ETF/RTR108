#include<stdio.h>

int main()
{
 long int a = 0x3ff;
 int b = 1000000000;
 int c = a+b;
 long int d = a*b;

 printf("a=%ld un b=%d, c=%d, d=%ld \n", a, b, c, d);
// printf("a=%ld \n", a);
}
