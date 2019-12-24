# 2. laboratorijas darba - Saknes (roots) - atskaite

## Teorija
Dihotomijas metode (*Bisection method*) ir saknes atrašanas metode, ko piemēro visām nepārtrauktajām funkcijām, kurām ir zināmas divas vērtības ar pretējām zīmēm. Metode sastāv no šo vērtību noteiktā intervāla atkārtotas dalīšanas un pēc tam atlases starpposma izvēles, kurā funkcija maina zīmi, un tāpēc tai jābūt saknei. Tā ir ļoti vienkārša un izturīga metode, taču tā ir arī salīdzinoši lēna. Tādēļ to bieži izmanto, lai iegūtu aptuvenu tuvinājumu risinājumam, kuru pēc tam izmanto kā sākumpunktu ātrāk konverģējošām metodēm.  

### Kods
```
/***************************************************************************************
Autors : Vladimirs Fedorovičs
Mērķis : Atrast sakni(es) funkcijai 'cos(x)*cos(x)=c' pēc šādiem lietotāja ievadītiem datiem:
1.) x vērtību intervāla sākuma punkts 'a' un gala punkts 'b' [a;b].
2.) funkcijas vērtība 'c'.
3.) Funkcijas vērtību apgabals ir ierobežots [0;1] 
    (tiek secināts pēc 1. LabDarba GNUPLOT grafika)
P.S. Teorijā, kvadrātfunkcijai ir divas saknes, un tieši intervāls nosaka, vai otra sakne ir/nav
*****************************************************************************************/

#include<stdio.h>
#include<math.h>
double f(double z)
 {return cos(z);} 
/*aprēķinam mūsu funkciju sākumā BEZ kvadrāta, pretējā gadījumā mēs nespēsim atrast saknes pēc dihatomijas metodes!*/

int main()
{
 float a, a0, aC, b, b0, bC, c, D, x1, x2, x0, delta_x, funkcA, funkcA0, funkcB, funkcB0, funkcX, funkcX0;
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
 a0 = aC = a;
 b0 = bC = b;
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
  printf("\nDotajā intervālā sakne(s) ir!\n\n");

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

 if (x2<aC | x2>bC) //Pārbaudam, vai x2 pieder pie intervāla apgabala
  {
   printf("Funkcija ir tikai viena vienīgā sakne!\n");
   printf("5.) Saknes atrodas pie x = %.4f funkcijai 'cos^2(x) = c'\n",x1);
   printf("6.) cos^2(%.4f) = %f, kas ir tuvinājums Jūsu ievadītai vērtībai c = %f\n",x1,pow(f(x1),2),c);
   printf("7.) Iterāciju skaits dotai saknei ir %d\n",k);
   return 0;
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

```
Ar cos^2(x) es apzīmēju savu funkciju saīsinātā veidā.

### Rezultāts Nr1
```
Sveicināti!
Šī programma atrod tādu(as) 'x' vērtību(as) no jūsu definētā intervāla [a;b],
pie kura izpildas vienādojums: cos(x)*cos(x) = c, kur 'c' pieder pie intervāla [0;1],
no kura Jūs izvēlēsieties sev tīkamu.
Turklāt, Jums būs jāievada arī precizitātes slieksnis delta_x

1.) Lūdzu, ievadiet intervāla sākotnējo x vērtību, a = -1.9
2.) Lūdzu, ievadiet intervāla gala x vērību, b = 0.5
3.) Lūdzu, ievadiet funkcijas vērtību, c = 0.22
4.) Lūdzu, ievadiet precizitātes slieksni, delta_x = 0.0001

Dotajā intervālā sakne(s) ir!

Funkcija ir tikai viena vienīgā sakne!
5.) Saknes atrodas pie x = -1.0825 funkcijai 'cos^2(x) = c'
6.) cos^2(-1.0825) = 0.220039, kas ir tuvinājums Jūsu ievadītai vērtībai c = 0.220000
7.) Iterāciju skaits dotai saknei ir 15

```

### Analīze Nr1
Šajā aprēķinā, programma konstatē, ka ir viena vienīgā sakne un izvada to!


### Rezultāts Nr2
```
Sveicināti!
Šī programma atrod tādu(as) 'x' vērtību(as) no jūsu definētā intervāla [a;b],
pie kura izpildas vienādojums: cos(x)*cos(x) = c, kur 'c' pieder pie intervāla [0;1],
no kura Jūs izvēlēsieties sev tīkamu.
Turklāt, Jums būs jāievada arī precizitātes slieksnis delta_x

1.) Lūdzu, ievadiet intervāla sākotnējo x vērtību, a = -3.2
2.) Lūdzu, ievadiet intervāla gala x vērību, b = 0.5
3.) Lūdzu, ievadiet funkcijas vērtību, c = 0.22
4.) Lūdzu, ievadiet precizitātes slieksni, delta_x = 0.0001

Dotajā intervālā sakne(s) ir!

5.) Saknes atrodas pie x1 = -1.0826 un x2 = -2.0590 funkcijai 'cos^2(x) = c'
6.a) Ar pirmo sakni cos^2(-1.0826) = 0.220025, kas ir tuvinājums Jūsu ievadītai vērtībai c = 0.220000
6.b) Ar otru sakni cos^2(-2.0590) = 0.220040, kas ir tuvinājums Jūsu ievadītai vērtībai c = 0.220000
7.a) Iterāciju skaits pirmajai saknei ir 16
7.b) Iterāciju skaits otrajai saknei ir 16

```

### Analīze Nr2
Šajā aprēķinā, programma konstatē, ka ir divas saknes un izvada tās!

### Secinājums
Rezultātu ieguvei nācās riktīgi palauzt galvu, bet izlasot atbilstošu nodaļu gramātā "Ievadu Algoritmu valodā" ( Autors J.Ziemelis), pildot V.Zagorska LabDarbu 17HEX, un urbjoties internetā man izdevās šo LabDarbu izpildīt.  
Nav iespējams saprast kodu lasot pa diagonāli, ir jāizprot ikkatra rindiņa! :) 

### Kļūdas
Kā jau visām programmām, arī šai ir kļūdas. Neesmu atrisinājis problēmu pie x intervāla \[-1;1\] funkcijai cos^2(x)=1. Būtu jābūt tā kā saknei **0**, bet programma viņu neredz. Tā pat ir arī Zagorska Python programma - tā arī **0** neredz. :( 

### Funkcijas y=cos(x)\*cos(x) grafiki  
#### Funkcijas grafiks rezultātam Nr1, x intervāls: \[-1.9;0.5\]  
![Funkcijas grafiks Nr1](https://github.com/MACTEP-ETF/RTR105/tree/master/darbi/LabDarbiAtskaites/roots/GnuplotRoots/RezultatsNr1.png)


#### Funkcijas grafiks rezultātam Nr2, x intervāls: \[-3.2;0.5\]  
![Funkcijas grafiks Nr2](https://github.com/MACTEP-ETF/RTR105/tree/master/darbi/LabDarbiAtskaites/roots/GnuplotRoots/RezultatsNr2.png)

#### Funkcijas cos(x)\*cos(x) grafiks no 1. LabDarba 
![Funkcijas grafiks](https://github.com/MACTEP-ETF/RTR105/blob/master/darbi/LabDarbiAtskaites/series/GnuplotSeries/Funkcijas%20grafiks.png)

#### Funkcijas vērtību skaitļošanas kods grafika attēlošanai GNUPLOT vidē
Rezultāts Nr1:
```
#include<stdio.h>
#include<math.h>

void main()
{
 float x, y, sakne;
 FILE * fptr;

 fptr = fopen("RootsGnuplotNr1.dat","w");
 x = -1.9;
 while (x<0.5001)
  {
   y = cos(x)*cos(x);
   fprintf(fptr,"%5.4f\t%5.4f\n",x,y);
   x += 0.0001;
  }

 fclose(fptr);
}
```
Rezultāts Nr2:
```
#include<stdio.h>
#include<math.h>

void main()
{
 float x, y;
 FILE * fptr;

 fptr = fopen("RootsGnuplotNr2.dat","w");

 x = -3.2;
 while (x<0.5001)
  {
   y = cos(x)*cos(x);
   fprintf(fptr,"%5.4f\t%5.4f\n",x,y);
   x += 0.0001;
  }

 fclose(fptr);
}
```
