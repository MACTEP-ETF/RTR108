#include<stdio.h>
char *rinda = "Tas ir rindas paraugs.\n";

int main()
{
 int garums = 0;
 char *darba = rinda; //Piešķir rindas sākuma adresi
 while (*darba++ !='\0') ++garums;
 printf("%d : %s\n", garums, rinda);
 return 0;
}
