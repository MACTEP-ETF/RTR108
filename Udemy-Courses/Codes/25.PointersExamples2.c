#include<stdio.h>
#include<conio.h>
void main()
{
    float n=5.6;
    float *p;
    p=&n;
    printf("\nAddress of n is : %u",&n);
    printf("\nAddress of n is : %u",p);
    printf("\nValue of n is : %f   %f   %f",n, *p, *(&n));
    getch();
}
