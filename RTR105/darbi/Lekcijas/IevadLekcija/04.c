#include<stdio.h>
float pi ()
 {
 float pi=3.14;
 return pi;
 }

int main()
 {
 int R=41;
 float L=2*pi()*R;
 printf ("Rinka ar rādiusu %d garums ir %.2f m\n", R, L);

 }
