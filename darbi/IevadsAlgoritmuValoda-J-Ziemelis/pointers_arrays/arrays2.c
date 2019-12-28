#include<stdio.h>
#define skaits 20
void main()
{
 int im[skaits], index, k=1;
 for (index=0; index<skaits; index++,k++)
 {
  im[index]=2*index+1;
  printf("%d. %d\n",k,im[index]);
 }
}
