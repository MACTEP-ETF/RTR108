#include<stdio.h>
#include<math.h>

void main()
{
 float x, y;
 FILE * fptr;

 fptr = fopen("RootsGnuplotNr2.dat","w");

 x = -3.2;
 while (x<0.5001)
  {
   y = cos(x)*cos(x);
   fprintf(fptr,"%5.4f\t%5.4f\n",x,y);
   x += 0.0001;
  }

 fclose(fptr);
}
