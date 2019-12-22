#include<stdio.h>
#include<math.h>

void main()
{
 float x, y;
 FILE * fptr;

 fptr = fopen("SeriesGnuplot.dat","w");

 x = -22;
 while (x<22.01)
  {
   y = cos(x)*cos(x);
   fprintf(fptr,"%f\t%f\n",x,y);
   x += 0.01;
  }

 fclose(fptr);
}
