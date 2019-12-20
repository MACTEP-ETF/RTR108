#include<stdio.h>

main()
{
 char mas[] = "Sveiks";
 printf("Izmers ir: %d\n",sizeof(mas));

 int i;
 for (i=0; i<sizeof(mas); i++)
  printf("%c %d\n", mas[i], mas[i]);

 char skaitlis[] = "123";
 printf("%x\n", skaitlis[0]);
 printf("%x\n", skaitlis[1]);
 printf("%x\n", skaitlis[2]);
 printf("%x\n", skaitlis[3]);

}
