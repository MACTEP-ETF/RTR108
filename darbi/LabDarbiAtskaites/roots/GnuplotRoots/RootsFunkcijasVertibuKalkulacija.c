#include<stdio.h>
#include<math.h>

void main()
{
 float x, y;
 FILE * fptr;

 fptr = fopen("RootsGnuplot.dat","w");

 x = -3.2;
 while (x<0.0001)
  {
   y = cos(x)*cos(x);
   fprintf(fptr,"%f\t%f\n",x,y);
   x += 0.0001;
  }

 fclose(fptr);
}
