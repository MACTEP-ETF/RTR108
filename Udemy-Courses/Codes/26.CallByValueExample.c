#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b);
void main()
{
    int a=5, b=10;
    printf("\nBefore swap : a=%d, b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter function call : a=%d, b=%d",a,b);
    getch();
}
void swap(int *p, int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
