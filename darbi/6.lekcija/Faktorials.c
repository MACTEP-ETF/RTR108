#include<stdio.h>
int main()
{
 int num, i;
 int reizinajums = 1;
 printf("Iedadam veselu skaitli: ");
 scanf("%d", &num);
 for (i=1; i<=num; i++)
 {
  reizinajums = reizinajums * i;
 }
 printf("Skaitlja %d faktorials ir: %d\n", num, reizinajums);
}
