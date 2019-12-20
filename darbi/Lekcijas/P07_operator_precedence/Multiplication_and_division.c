#include<stdio.h>


int main()
{

 int a, b;
 printf("Šeit veiksim reizināšanas un dalīšanas operācijas\n");
 printf("Sākumā veiksim reizināšanu :)\n");
 printf("Ievadiet 1. veselo skaitli: ");
 scanf("%d", &a);
 printf("Ievadiet 2. veselo skaitli: ");
 scanf("%d", &b);
 printf("Operācija *: %d*%d = %d\n", a, b, a*b); //Sareizinam abus ievadītos skaitļus

 float c, d;
 printf("\n");
 printf("--------------------------\n");
 printf("Veiksim dalīšanas operāciju\n");
 printf("Ievadiet 1. veselo skaitli: ");
 scanf("%e", &c);
 printf("Ievadiet 2. veselo skaitli: ");
 scanf("%e", &d);
 printf("Operācija *: %f/%f = %f\n", c, d, c/d); //Dalam abus ievadītos skaitļus

}
