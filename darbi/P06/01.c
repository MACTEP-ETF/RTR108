#include<stdio.h>


int main() 
{
 char a = 127;
 printf("Operācija >> : %d>>1 rezultāts %d\n", a, a>>1); //Pārbīdam bitu kodu pa 1 vienību pa kreisi, respektīvi no "0111 1111" uz "0011 1111"
 printf("Operācija >> : %d>>2 rezultāts %d\n", a, a>>2); //Atbilstoši iepriekšējam, pārbīdam bitu kodu pa 2 vienībām pa kreisi, respektīvi no "0111 1111" uz "0001 1111"
 printf("Operācija >> : %d<<1 rezultāts %d\n", a, a<<1); //Pārbīdam pa 1 vienību pa labi: "0111 1111" uz "1111 1110"
 
}
