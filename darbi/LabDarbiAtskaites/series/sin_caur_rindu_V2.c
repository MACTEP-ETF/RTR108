// S0, S1, S2, S3 -> S
#include<stdio.h>
#include<math.h>
void main(){
 double x=2.05,y,a0,a1,a2,a3,S;
 y = sin(x);
 printf("y=sin(%.2f)=%.2f\n",x,y);

 a0 = pow(-1,0)*pow(x,2*0+1)/(1.);
 S = a0;//S0 = a0;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a0,S);

 a1 = pow(-1,1)*pow(x,2*1+1)/(1.*1*2*3);
 S = S + a1;//S1 = a0 + a1; // S += a1;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a1,S);

 a2 = pow(-1,2)*pow(x,2*2+1)/(1.*1*2*3*4*5);
 S = S + a2;//S2 = a0 + a1 + a2; // S += a2;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a2,S);

 a3 = pow(-1,3)*pow(x,2*3+1)/(1.*1*2*3*4*5*6*7);
 S = S + a3;//S3 = a0 + a1 + a2 + a3; // S += a3;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a3,S);
}
