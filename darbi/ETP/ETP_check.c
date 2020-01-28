#include<stdio.h>
void main ()
{
 float I1=5.04e-3, I3=4.44e-3, I4=0.59e-3, I5=1.74e-3, I6=0.59e-3, I7=1.14e-3;
 float U14=8.12, U24=-0.634, U34=6.55, U12, U13;
 float Pel1_, Pel3_, Pel4_, Pel5_, Pel6_, Pel7_, P_sum;
 int R=1;

 U12=U14-U24;
 U13=U14-U34;

 Pel1_=I1*(-U12)*R;
 Pel3_=I3*U12*R;
 Pel4_=I4*U13*R;
 Pel5_=I5*U34*R;
 Pel6_=I6*(-U24)*R;
 Pel7_=I7*(-U34)*R;

 float Pel[2][6]={{Pel1_,Pel3_,Pel4_,Pel5_,Pel6_,Pel7_},{1,3,4,5,6,7}};
 //P_sum=Pel1_+Pel3_+Pel4_+Pel5_+Pel6_+Pel7_;
 
 P_sum = 0;

 for (int i=0; i<6; i++)
 {
  P_sum += Pel[0][i];
 }
 printf("Bilance: %.7f, W\n", P_sum); 
 printf("Bilance: %.7e, W\n", P_sum); 
 for (int i=0; i<6; i++)
 {
  if (Pel[0][i]>0)
  { 
   printf("%.f. saliktais elements nostrādā kā patērētājs\n",Pel[1][i]);
  }
  else
  {
   printf("%.f. saliktais elements nostrādā kā avots\n", Pel[1][i]);
  }
 }
}
