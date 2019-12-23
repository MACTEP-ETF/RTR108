/*************************************************************************
Autors : Vladimirs Fedorovičs
Mērķis : Aprēķināt funkcijas 'cos(x)*cos(x)' tiešo vērtību,
kā arī tās 1. un 2. kārtas atvasinājumus, pēc lietotāja ievadītiem datiem
*************************************************************************/

//Jānoskaidro kas ir 'analytical formula' un 'forward differece'

#include<stdio.h>
#include<math.h>

void main()
{
 float a, b, x, delta_x; //kur 'a' un 'b' - intervāls [a;b], 'x' - mainīgais aprēķinam, 'delta_x' - precizitātes vērtība
 FILE * derivative;

 printf("\nSveicināti!\n");
 printf("Šī programma aprēķina funkcijas cos(x)*cos(x) tiešo vērtību,\n");
 printf("kā arī 1. un 2. kārtas atvasinājumus.\n");

 printf("Lūdzu, nosakiet x vērtības intervālu [a;b].\n");
 printf("a = "); scanf("%f",&a);

 B:
 printf("b = "); scanf("%f",&b);
 if (b<a)
 {
  printf("Beigu intervāla vērtība nevar būt mazāka par sākuma vērtību!\nLūdzu ievadiet vēlreiz!\n");
  goto B;
 }

 printf("\nKā arī, nosakiet ar kādu soli (delta_x) mēs šo intervālu izskatīsim.\n");
 Delta:
 printf("delta_x = "); scanf("%f",&delta_x);
 if (delta_x>(b-a))
 {
  printf("delta_x nevar būt lielāks par intervālu!\nLūdzu ievadiet vēlreiz!\n");
  goto Delta;
 }

 derivative = fopen ("derivative.dat","w"); //izveidojam un atveram failu priekš GNUPLOT grafika zīmēšanas

 printf("\tx\tcos(x)*cos(x)\t(cos(x)*cos(x))\'\t(cos(x)*cos(x))\'\'\n");
 fprintf(derivative,"\tx\tcos(x)*cos(x)\t(cos(x)*cos(x))\'\n"); //ierakstīsim TITLE katram stabiņam

 x = a;
 while(x<b)
 {
  printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,pow(cos(x),2),-sin(2*x),-2*cos(2*x));
  fprintf(derivative,"%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,pow(cos(x),2),-sin(2*x),-2*cos(2*x)); //ierakstam katru soli failā
  x += delta_x;
 }
 fclose(derivative); //aizveram failu 'derivative.dat'
}

/*
Aprēķināsim f'(x) izmantojot likumus un formulas no augstākās matemātikas:
(cos(x)*cos(x))' = 2 * cos(x) * (-sin(x)) = -sin(2*x)

Aprēķināsim f''(x) izmantojot likumus un formulas no augstākās matemātikas:
(cos(x)*cos(x))'' = (-sin(2*x))' = -1 * cos(2*x) * 2 = -2*cos(2*x)

*/
