#include<stdio.h>
#include<math.h>

void main(){
 float a = 0., b = 2*M_PI, x, delta_x = 1.e-1;
 FILE * derivative;

 derivative = fopen ("derivative.dat","w");

 printf("\tx\tcos(x)*cos(x)\t(cos(x)*cos(x))\'\t(cos(x)*cos(x))\'\'\n");
 fprintf(derivative,"\tx\tcos(x)*cos(x)\t(cos(x)*cos(x))\'\n");

 x = a;
 while(x<b){
  printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,cos(x),-sin(2*x),-2*cos(2*x));
  fprintf(derivative,"%10.2f\t%10.2f\t%10.2f\n",x,cos(x),-sin(2*x));
  x += delta_x;
  }
 fclose(derivative);
}

/*
Aprēķināsim f'(x) izmantojot likumus un formulas no augstākās matemātikas:
(cos(x)*cos(x))' = 2 * cos(x) * (-sin(x)) = -sin(2*x)

Aprēķināsim f''(x) izmantojot likumus un formulas no augstākās matemātikas:
(cos(x)*cos(x))'' = (-sin(2*x))' = -1 * cos(2*x) * 2 = -2*cos(2*x)

*/
