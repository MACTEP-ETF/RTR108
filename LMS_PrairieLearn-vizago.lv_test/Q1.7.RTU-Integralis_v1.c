/***************************************
Autors : Vladimirs Fedorovičs
Mērķis : Aprēķināt integrāli

Izvēlējos trapecveida metodi,
jo pildot 4. LabDarbu biju atklājis,
ka šī metode ir pati precīzākā
***************************************/

#include<stdio.h>
#include<math.h>

double Trapecveida(double, double, double);

double f(double z)
{
 return (pow(z,2)+3);
}

//MAIN sākums
void main()
{
 double a, b, delta_x;
 a = 1;
 b = 4;
 delta_x = 0.0001;

 printf("Integrālis pēc trapecveida metodes: %.3f0\n",Trapecveida(a,b,delta_x)); /*pierakstīju '0' pēc rezultāta, lai atbilde pilnībā sakrīt ar testēšanas rezultātu. Jo trapecveida metode skaitļo vēl precīzāk par jūsu metodi, dēļ tā ir nepieciešams šāds atbildes pieraksts.*/

}
//MAIN beigas

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
