/**********************************************************************
Autors : Vladimirs Fedorovics
Merkis : Uzrakstit algoritmu, kurs aprekina cos(x)*cos(x). Variants Nr12.
**********************************************************************/

#include<stdio.h>
#include<math.h>

void main()
{
 double x=1, y, a, S;
 int k = 1;
 int e = 3, d = 4; //faktoriala aprekinasanas vajadzibam
// y = cos(x);

// printf("Ievadiet x vertibu cos(x)*cos(x) aprekinasanai: ");
// scanf("%lf",&x);

 a = (pow(-1,k+1)*pow(x,2*k)*pow(2,2*k-1))/(1*2);
 S = 1 - a;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

while(k<10)
 {
  k++;
  a = a * (((-1)*x*x*2*2)/(e*d));
  S = 1 - (S + a);
  printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
  e = e + 2;
  d = d + 2;
 }

}
