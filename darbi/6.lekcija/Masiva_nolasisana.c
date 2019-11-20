#include<stdio.h>
main()
{
 int mas[3]={22, 33, 44};
 int i;
 printf("Izmers ir: %d\n",sizeof(mas));
 printf("%p\n",mas);

 for (i=0; i<sizeof(mas); i++)
  printf("%p\n", &mas[i]); //druka i-ta elementa adresi
}
