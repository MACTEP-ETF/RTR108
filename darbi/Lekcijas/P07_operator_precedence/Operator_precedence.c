#include<stdio.h>

int a=1, b=2, c=3, d=4, e=5;
int rez1, rez2;
int X;

int main()
{
 a += e;
 b *= d;
 d /= c;
 X = rez1 & rez2;

 printf("%d - saskaitīšana\n", a);
 printf("%d - reizināšana\n", b);
 printf("%d - dalīšana\n", d);
 printf("%d - AND\n", X);
}
