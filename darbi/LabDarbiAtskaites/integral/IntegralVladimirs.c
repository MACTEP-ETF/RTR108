/*************************************************************************
Autors : Vladimirs Fedorovičs
Mērķis : Aprēķināt funkcijas 'cos(x)*cos(x)' integrālu pēc trīm metodēm:
1.) Taisnstūra;
2.) Trapecveida;
3.) Simpsona.

Lietotājs pats ievada 'x' vērtības intervālu [a;b], 
kā arī nosaka 'delta_x' soli ar kuru šis intervāls tiks izskaitļots.
*************************************************************************/

#include<stdio.h>
#include<math.h>

double Taisnstura(double, double, double);
double Trapecveida(double, double, double);
double Simpsona(double, double, double);

double f(double z)
{
 return pow(cos(z),2);
}

void main ()
{
 double a, b, delta_x;

 printf("\nSveicināti!\n");
 printf("Šī programma aprēķina funkcijas cos(x)*cos(x) integrālu pēc trīm metodēm:\n");
 printf("taisnstūra, trapecveida, Simpsona.\n");

 printf("Lūdzu, nosakiet x vērtības intervālu [a;b].\n");
 printf("a = "); scanf("%lf",&a);

 B:
 printf("b = "); scanf("%lf",&b);
 if (b<=a)
 {
  printf("Beigu intervāla vērtība nevar būt mazāka/vienāda ar sākuma vērtību!\nLūdzu ievadiet vēlreiz!\n");
  goto B;
 }

 printf("\nKā arī, nosakiet ar kādu soli (delta_x) mēs šo intervālu izskatīsim.\n");

Delta:
 printf("delta_x = "); scanf("%lf",&delta_x);
 if (delta_x>(b-a))
 {
  printf("delta_x nevar būt lielāks par intervālu!\nLūdzu ievadiet vēlreiz!\n");
  goto Delta;
 }

 printf("Integrālis pēc taisnstūra metodes: %g\n",Taisnstura(a,b,delta_x));
 printf("Integrālis pēc trapecveida metodes: %g\n",Trapecveida(a,b,delta_x));
 printf("Integrālis pēc Simpsona metodes: %g\n\n",Simpsona(a,b,delta_x));
}

double Taisnstura(double a, double b, double delta_x)
{
 int k, n = 2;
 double half, Integr1 = 0., Integr2;

 Integr2 = (b - a) * (f(a) + f(b))/2.; //Integrāļa pirmais tuvinājums

 while (fabs(Integr2 - Integr1) > delta_x)
 {
  n *= 2; half = (b - a)/n; //Sagatavojas risināt ar samazinātu soli
  Integr1 = Integr2; //Iepriekšējā soļa vērtība tagad būs mazāk precīza
  Integr2 = 0.; //Pirms summēšanas piešķir sākotnējo vērtību

  for (k=0; k<n; k++)
  {Integr2 += half * f(a+(k+0.5)*half);} //Arguments intervāla vidū
 }
 return Integr2;
}

double Trapecveida(double a, double b, double delta_x)
{
 double TrapF0, TrapFend, TrapFn, TrapXn;
 double TrapSum = 0;

 TrapXn = a + delta_x; //Pirmā 'x-entā' vērtība
 TrapF0 = f(a); //Pie 'x0' funkcijas rezultāts
 TrapFend = f(b); //Pie 'x_pēdējās' funkcijas rezultāts

 while (TrapXn<b)
 {
  TrapFn = f(TrapXn);
  TrapSum += TrapFn;
  TrapXn += delta_x;
 }
 return ((delta_x * (TrapF0 + (2 * TrapSum) + TrapFend))/2.);
}

double Simpsona(double a, double b, double delta_x)
{
 int j, l, m = 1;
 double SimpsHalf, SimpsIntegr1 = 0., SimpsIntegr2;

 SimpsIntegr2 = (b - a) * (f(a) + f(b))/2.; //Integrāļa pirmais tuvinājums

 while (fabs(SimpsIntegr2 - SimpsIntegr1) > delta_x)
 {
  m *= 2; l = 2 * m; SimpsHalf = (b - a)/l; //Sagatavojas risināt ar samazinātu soli
  SimpsIntegr1 = SimpsIntegr2; //Iepriekšējā soļa vērtība tagad būs mazāk precīza
  SimpsIntegr2 = 0.; //Pirms summēšanas piešķir sākotnējo vērtību

  for (j=1; j<=m-1; j++)
  {SimpsIntegr2 += 2. * (2. * f(a+(2*j-1)*SimpsHalf) + f(a+2*j*SimpsHalf));}

  SimpsIntegr2 += f(b) + 4. * f(b-SimpsHalf);
  SimpsIntegr2 *= SimpsHalf/3.;
 }
return SimpsIntegr2;
}
