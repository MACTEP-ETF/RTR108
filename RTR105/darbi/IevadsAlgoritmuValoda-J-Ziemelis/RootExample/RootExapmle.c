#include<stdio.h>
#include<math.h>

double f(double z) {return z*sin(z)+sqrt(z+1.);}

int main()
{
 /*Meklējam sakni intervālā [-1.,5.], dalot intervālu uz pusēm. Argumenta precizitāte 1.e-5*/
 double x, a=-1., b=5., funkc, funkca;
 funkca=f(a); funkc=f(b);

 if (funkca*funkc>0.)
 {
  /*Ja intervālā saknes nav, tad nekas nav jāmeklē*/ 
  printf("Intervālā [%5.1f, %5.1f] funkcijai saknes nav\n", a,b);
 return 0;
 }

 while(fabs(b-a)>1.e-5)
 {
  x=(b+a)/2.; funkc=f(x);
  if(funkc*funkca<=0.)
   b=x;
  else
   a=x;
 }

 x=(a+b)/2.;
 printf("a=%f \t b=%f \t x=%f \t f(x)=%g\n",a,b,x,f(x));
 return 0;
}
