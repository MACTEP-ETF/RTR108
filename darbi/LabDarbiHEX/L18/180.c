#include<stdio.h>
#include<math.h>

float Laukums(float x, float y) {return ((x*y)/2.);}
float F(float c) {return 2*c;}

void main()
{
 float a, b, x, y;
 float xNeg, xPoz, yNeg, yPoz, GalaLaukums; //Pozitīvā un negatīvā laukumu aprēķināšanai un GalaLaukuma izvadei
 printf("Ievadiet intervālu x [a;b], lai aprēķinātu integrālu funkcijai f(x)=2x\n");

 StartA:
 printf("a = ");  scanf("%f", &a);
 printf("b = ");  scanf("%f", &b); 
 if (b<=a)
 {
  printf("Gala intervāla vertība nevar būt mazāka vai vienāda ar sākuma vērtību!\n");
  printf("Lūdzu sāciet no sākuma!\n");
  goto StartA;
 }

 //atrodam 'x' un 'y' vērtības laukuma aprēķināšanai!
 if ((a < 0) & (b <= 0))
 {
  x = fabs(a) - fabs(b);
  y = fabs(F(a)) - fabs(F(b));
  printf("\nIntegrālis no funkcijas f(x)=2x ir: %.2f\n\n",-Laukums(x,y)); //Laukums būs negatīvs, jo intervāls ir no negatīvā 'x'
 }
 else if ((a >= 0))
 {
  x = b - a;
  y = F(b) - F(a);
  printf("\nIntegrālis no funkcijas f(x)=2x ir: %.2f\n\n", Laukums(x,y));
 }
 else if ((a < 0) & (b > 0))
 {
  xNeg = fabs(a);
  xPoz = b;
  yNeg = fabs(F(a));
  yPoz = F(b);
  GalaLaukums = Laukums(xPoz,yPoz) - Laukums(xNeg,yNeg);
  printf("\nIntegrālis no funkcijas f(x)=2x ir: %.2f\n\n", GalaLaukums);
 }
}
