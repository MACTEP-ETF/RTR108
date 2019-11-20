#include<stdio.h>

int main()
{
 int mas[5] = {22,33,44};

  printf("%d\n", mas); //druka masiva pirma elementa vertibu
  printf("%u\n", mas); //druka unsigned formats
  printf("%x\n", mas); //druka sedecimala formata
  printf("%p\n", mas); //druka adresu formata
  printf("mas[0]=%p\n", mas[0]); //saturu adresu formata
  printf("mas[0]=%p\n", *mas); //saturu adresu formata
  printf("mas[0]=%d\n", *mas); //saturu dec formata
}
