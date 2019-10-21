#include<stdio.h>
void main()
 {
 int number1, number2;

 printf("Cienījamais lietotāj, lūdzu, ievadi 1. skaitli: ");
 scanf("%d",&number1);
 printf("Cienījamais lietotāj, lūdzu, ievadi 2. skaitli: ");
 scanf("%d",&number2);

 if (number1 > number2)
 printf("Tavs 1. skaitlis %d ir > nekā 2. skaitlis %d\n",number1,number2);
 printf("Šis teksts parādīsies jebkurā gadījumā\n");

 if (number1 > number2)
  {
  printf("Joprojām tavs 1. skaitlis %d ir > nekā 2. skaitlis %d\n",number1,number2);
  printf("Bet šis teksts jau neparadīsies jebkurā gadījumā\n");
  }
 }

