#include<stdio.h>
int main()
{
 int mas[10]; //izveido masivu ar 10 elementiem
 int i;

 for (i=0;i<10;i++) //masiva elementu inicializacija
 {
  mas[i] = i*i; //tekosais elements bus: x*x
 }		//paradit "masiva" saturu

 for (i=0; i<10; i++)
  printf("mas[ %d ] = %d\n", i, mas[i]);
}
