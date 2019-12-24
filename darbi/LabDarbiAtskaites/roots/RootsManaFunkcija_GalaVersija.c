/***************************************************************************************
Autors : Vladimirs Fedorovičs
Mērķis : Atrast sakni(es) funkcijai 'cos(x)*cos(x)=c' pēc šādiem lietotāja ievadītiem datiem:
1.) x vērtību intervāla sākuma punkts 'a' un gala punkts 'b' [a;b].
2.) funkcijas vērtība 'c'.
3.) Funkcijas vērtību apgabals ir ierobežots [0;1] 
    (tiek secināts pēc 1. LabDarba GNUPLOT grafika)

P.S. Teorijā, kvadrātiskai funkcijai ir divas saknes, un tieši intervāls nosaka, vai otra sakne ir/nav
*****************************************************************************************/

#include<stdio.h>
#include<math.h>
double f(double z)
 {return cos(z);} 
/*aprēķinam mūsu funkciju sākumā BEZ kvadrāta, pretējā gadījumā mēs nespēsim atrast saknes pēc dihatomijas metodes!*/

int main()
{
 float a, a0, b, b0, c, D, x1, x2, x0, delta_x, funkcA, funkcA0, funkcB, funkcB0, funkcX, funkcX0;
 float tempNeg, tempPoz;
 int k=0, j=0; //cikla mainīgie

 printf("\nSveicināti!\n");
 printf("Šī programma atrod tādu(as) 'x' vērtību(as) no jūsu definētā intervāla [a;b],\n");
 printf("pie kura izpildas vienādojums: cos(x)*cos(x) = c, kur 'c' pieder pie intervāla [0;1],\n");
 printf("no kura Jūs izvēlēsieties sev tīkamu.\n");
 printf("Turklāt, Jums būs jāievada arī precizitātes slieksnis delta_x\n\n");

 StartA:
 printf("1.) Lūdzu, ievadiet intervāla sākotnējo x vērtību, a = ");
 scanf("%f",&a);
 printf("2.) Lūdzu, ievadiet intervāla gala x vērību, b = ");
 scanf("%f",&b);
 if (b<a)
 {
  printf("Intervāla gala vērtība nevar būt mazāka par sākotnējo!\n");
  printf(" Lūdzu, ievadiet atkārtoti visu intervālu!\n");
  goto StartA;
 }

 StartC:
 printf("3.) Lūdzu, ievadiet funkcijas vērtību, c = ");
 scanf("%f",&c);
 if (c>1 | c<0)
 {
  printf("Funkcijas vērtība neatbilst funkcijas intervālam [0;1]!\n");
  goto StartC;
 }

 printf("4.) Lūdzu, ievadiet precizitātes slieksni, delta_x = ");
 scanf("%f",&delta_x);

/*Aprēķina sākums*/
 D = sqrt(c);
 a0 = a;
 b0 = b;
 funkcA = f(a)-D;
 funkcA0 = f(a);
 funkcB = f(b)-D;
 funkcB0 = f(b);

 if((funkcA)*(funkcB)>0.0)
 {
  printf("Intervālā [%.2f;%.2f] cos(x)*cos(x)=c funkcijai ",a,b);
  printf("sakņu nav (vai tājā ir vairāk nekā 2 saknes)!\n");
  printf("Lūdzu, sāciet no sākuma un paplašiniet/sašauriniet intervālu!\n\n\n");
  goto StartA;
 }
 else
  printf("\nDotajā intervālā sakne ir!\n\n");

 while(fabs(b-a)>delta_x)
 {
  k++;//k=k+1;//k+=1;
  x1 = (a+b)/2.;
  funkcX = f(x1)-D;
  if((funkcA)*(funkcX)<0.) // tuvojamies mūsu f(x)=D rezultātam
   b = x1;
  else
   a = x1;
 }

//Meklējam funkciju x0 punktā
while(fabs(b0-a0)>delta_x)
 {
  j++;//k=k+1;//k+=1;
  x0 = (a0+b0)/2.;
  funkcX0 = f(x0);
  if((funkcA0)*(funkcX0)<0.) // tuvojamies mūsu f(x)=D rezultātam
   b0 = x0;
  else
   a0 = x0;
 }

 if (x1>0)
 {
  tempPoz = x0 - x1;
  x2 = x0 + tempPoz;
 }
 else if (x1==0) x2=x1;
 else
 {
 tempNeg = fabs(x0) - fabs(x1);
 x2 = x0 - tempNeg;
 }

/*
 printf("x0 %f\n", x0); //šeit es pārbaudīju mainīgos, kad izstrādāju augstākminēto x2 meklēšanu
 printf("x1 %f\n", x1);
 printf("x2 %f\n", x2);
*/

 printf("5.) Saknes atrodas pie x1 = %.4f un x2 = %.4f funkcijai 'cos^2(x) = c'\n",x1,x2);
 printf("6.a) Ar pirmo sakni cos^2(%.4f) = %f, kas ir tuvinājums Jūsu ievadītai vērtībai c = %f\n",x1,pow(f(x1),2),c);
 printf("6.b) Ar otru sakni cos^2(%.4f) = %f, kas ir tuvinājums Jūsu ievadītai vērtībai c = %f\n",x2,pow(f(x2),2),c);
 printf("7.a) Iterāciju skaits pirmajai saknei ir %d\n",k);
 printf("7.b) Iterāciju skaits otrajai saknei ir %d\n\n",j);
 return 0;
}
