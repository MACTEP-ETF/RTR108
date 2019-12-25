/*************************************************************************
Autors : Vladimirs Fedorovičs
Mērķis : Aprēķināt funkcijas 'cos(x)*cos(x)' tiešo vērtību,
kā arī tās 1. un 2. kārtas atvasinājumus, pēc lietotāja ievadītiem datiem
*************************************************************************/

#include<stdio.h>
#include<math.h>
double f(double z)
{
 return pow(cos(z),2);
}
void main()
{
 double a, b, x, delta_x; //kur 'a' un 'b' - intervāls [a;b], 'x' - mainīgais aprēķinam, 'delta_x' - solis
 double x0, Funx, FunD, FunD2, FunAtv1, FunAtv2; //'Forward difference' mainīgie

 FILE *Der; //pointers GNUPLOT grafika faila izveidei priekš zīmēšanas

 printf("\nSveicināti!\n");
 printf("Šī programma aprēķina funkcijas cos(x)*cos(x) tiešo vērtību,\n");
 printf("kā arī 1. un 2. kārtas atvasinājumus pēc divām metodēm:\n");
 printf("A.) Ar analitisko formulu (AF).\n");
 printf("B.) Ar 'forward difference' metodi (FD).\n");

 printf("Lūdzu, nosakiet x vērtības intervālu [a;b].\n");
 printf("a = "); scanf("%lf",&a);

 B:
 printf("b = "); scanf("%lf",&b);
 if (b<a)
 {
  printf("Beigu intervāla vērtība nevar būt mazāka par sākuma vērtību!\nLūdzu ievadiet vēlreiz!\n");
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

 Der = fopen ("derivative.dat","a"); //izveidojam un atveram failu priekš GNUPLOT grafika zīmēšanas

 //Aprakstam stabiņu nosaukumus
 printf("      x\t\t    f(x)\t    f\'(x)\t    f\'(x)\t    f\'\'(x)\t    f\'\'(x)\n");
 printf("       \t\t    \t\t    ar AF\t    ar FD\t    ar AF\t    ar FD\n");

 //ierakstīsim TITLE katram stabiņam iekš DAT faila
 fprintf(Der,"#     x\t\t    f(x)\t    f\'(x)\t    f\'(x)\t    f\'\'(x)\t    f\'\'(x)\n");
 fprintf(Der,"#      \t\t    \t\t    ar AF\t    ar FD\t    ar AF\t    ar FD\n");

 x = x0 = a;
 while(x<b)
 {
  Funx = f(x0);
  FunD = f(x0 + delta_x);
  FunAtv1 = (FunD - Funx)/delta_x;
  FunD2 = f(x0 - delta_x);
  FunAtv2 = (FunD - (2 * Funx) + FunD2)/pow(delta_x,2) + 0 * pow(delta_x,2); // Formula: y''(x)=(y(x+h)-2*y(x)+y(x-h))/h^2+0*(h^2)
  printf("%10.4f\t%10.4f  \t%10.4f\t%10.4f  \t%10.4f\t%10.4f  \n",x,pow(cos(x),2),-sin(2*x),FunAtv1,-2*cos(2*x),FunAtv2);

  //ierakstam katru soli failā
  fprintf(Der,"%10.4f\t%10.4f  \t%10.4f\t%10.4f  \t%10.4f\t%10.4f  \n",x,pow(cos(x),2),-sin(2*x),FunAtv1,-2*cos(2*x),FunAtv2);

  x += delta_x;
  x0 += delta_x;
 }
 fclose(Der); //aizveram failu 'derivative.dat'
}

/*
Aprēķināsim f'(x) izmantojot analitisko formulu (augstākā matemātika):
(cos(x)*cos(x))' = 2 * cos(x) * (-sin(x)) = -sin(2*x)

Aprēķināsim f''(x) izmantojot analitisko formulu (augstākā matemātika):
(cos(x)*cos(x))'' = (-sin(2*x))' = -1 * cos(2*x) * 2 = -2*cos(2*x)
*/
