/**********************************************************************
Autors : Vladimirs Fedorovics
Merkis : Uzrakstit algoritmu, kurs aprekina cos(x)*cos(x). Variants Nr12.
**********************************************************************/

#include<stdio.h>
#include<math.h>

void main()
{
 double x, y, a, S;
 int k = 1;
 int e = 3, d = 4; //faktoriala aprekinaasanas vajadziibaam
 y = cos(x)*cos(x);

 start:
 printf("\n\nIevadiet 'x' veertiibu funkcijas 'cos(x)*cos(x)' apreekinaasanai: ");
 scanf("%lf",&x);

 if (x>1 | x<-1)
 {
   printf("ievadiet skaitli robezaas no [-1;1]\n");
   goto start;
 }
 else
 {
   a = (pow(-1,k+1)*pow(x,2*k)*pow(2,2*k-1))/(1.*1*2);
   S = a;
   printf("%.2f\t%8.2f\t%8.2f\n",x,a,1-S);

   while(k<6)
    {
      k++;
      a = a * (((-1)*x*x*2*2)/(1. *e*d));
      S = S + a;
      printf("%.2f\t%8.2f\t%8.2f\n",x,a,1-S);
      e = e + 2;
      d = d + 2;
    }
 }
}
