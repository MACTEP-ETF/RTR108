#include<stdio.h>
#include "local.c"

int main()
{
 int i,k;
 printf("Ievadiet i: "); scanf("%d",&i);
 printf("Ievadiet k: "); scanf("%d",&k);
 printf("min = %d\n", min(i,k));
 printf("dalītājs = %d\n", dal(i,k));
 return 0;
}

