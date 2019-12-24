# 2. laboratorijas darba - Saknes (roots) - atskaite

## Teorija
Dihotomijas metode (*Bisection method*) ir saknes atrašanas metode, ko piemēro visām nepārtrauktajām funkcijām, kurām ir zināmas divas vērtības ar pretējām zīmēm. Metode sastāv no šo vērtību noteiktā intervāla atkārtotas dalīšanas un pēc tam atlases starpposma izvēles, kurā funkcija maina zīmi, un tāpēc tai jābūt saknei. Tā ir ļoti vienkārša un izturīga metode, taču tā ir arī salīdzinoši lēna. Tādēļ to bieži izmanto, lai iegūtu aptuvenu tuvinājumu risinājumam, kuru pēc tam izmanto kā sākumpunktu ātrāk konverģējošām metodēm.  

### Kods
```
/***************************************************************************************
Autors : Vladimirs Fedorovičs
Mērķis : Atrast sakni funkcijai 'cos(x)*cos(x)=c' pēc šādiem lietotāja ievadītiem datiem:
1.) x vērtību intervāla sākuma punkts 'a' un gala punkts 'b' [a;b].
2.) funkcijas vērtība 'c'.
3.) Funkcijas vērtību apgabals ir ierobežots [0;1] 
    (tiek secināts pēc 1. LabDarba GNUPLOT grafika)
P.S. Teorijā, kvadrātiskai funkcijai ir divas saknes, bet tā kā Dihotomijas metode 
meklē tikai vienu vienīgo sakni, tad programma atrod tikai vienu vienīgo x vērtību
*****************************************************************************************/

#include<stdio.h>
#include<math.h>
double f(double z)
 {return cos(z);} 
/*aprēķinam mūsu funkciju sākumā BEZ kvadrāta, pretējā gadījumā mēs nespēsim atrast saknes pēc dihatomijas metodes!*/

int main()
{
 float a, b, c, D, x, delta_x, funkcA, funkcB, funkcX;
 int k=0; //cikla mainīgais

 printf("\nSveicināti!\n");
 printf("Šī programma atrod tādu 'x' vērtību no jūsu definētā intervāla [a;b],\n");
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
 funkcA = f(a)-D;
 funkcB = f(b)-D;

 if((funkcA)*(funkcB)>0.0)
 {
  printf("Intervālā [%.2f;%.2f] cos(x)*cos(x)=c funkcijai ",a,b);
  printf("sakņu nav (vai tājā ir pāra sakņu skaits)!\n");
  printf("Lūdzu, sāciet no sākuma!\n\n\n");
  goto StartA;
 }
 else
  printf("\nDotajā intervālā sakne ir!\n\n");

 while(fabs(b-a)>delta_x)
 {
  k++;//k=k+1;//k+=1;
  x = (a+b)/2.;
  funkcX = f(x)-D;
  if((funkcA)*(funkcX)<0.) // tuvojamies mūsu f(x)=D rezultātam
   b = x;
  else
   a = x;
 }

 printf("5.) Sakne atrodas pie x = %.4f funkcijai 'cos^2(x) = c'\n",x);
 printf("6.) cos^2(%.4f) = %f, kas ir tuvinājums Jūsu ievadītai vērtībai c = %f\n",x,pow(f(x),2),c);
 printf("7.) Iterāciju skaits ir vienāds ar %d\n\n",k);
 return 0;
}

```
Ar cos^2(x) es vienkārši apzīmēju savu funkciju saīsinātā veidā.

### Rezultāts
```
Sveicināti!
Šī programma atrod tādu 'x' vērtību no jūsu definētā intervāla [a;b],
pie kura izpildas vienādojums: cos(x)*cos(x) = c, kur 'c' pieder pie intervāla [0;1],
no kura Jūs izvēlēsieties sev tīkamu.
Turklāt, Jums būs jāievada arī precizitātes slieksnis delta_x

1.) Lūdzu, ievadiet intervāla sākotnējo x vērtību, a = -3.2
2.) Lūdzu, ievadiet intervāla gala x vērību, b = 0
3.) Lūdzu, ievadiet funkcijas vērtību, c = 0.22
4.) Lūdzu, ievadiet precizitātes slieksni, delta_x = 0.0001

Dotajā intervālā sakne ir!

5.) Sakne atrodas pie x = -1.0825 funkcijai 'cos^2(x) = c'
6.) cos^2(-1.0825) = 0.220059, kas ir tuvinājums Jūsu ievadītai vērtībai c = 0.220000
7.) Iterāciju skaits ir vienāds ar 15

```

### Analīze
Rezultātu ieguvei nācās riktīgi palauzt galvu, bet izlasot atbilstošu nodaļu gramātā "Ievadu Algoritmu valodā" ( Autors J.Ziemelis), pildot V.Zagorska LabDarbu 17HEX, un urbjoties internetā man izdevās šo LabDarbu izpildīt.  

### Secinājums
Nav iespējams saprast kodu lasot pa diagonāli, ir jāizprot ikkatra rindiņa! :) 

### Funkcijas cos(x)\*cos(x)=0.22 grafiks x vērtības intervālā:  \[-3.2;0\]  
![Funkcijas grafiks](https://github.com/MACTEP-ETF/RTR105/blob/master/darbi/LabDarbiAtskaites/series/GnuplotSeries/Funkcijas%20grafiks.png)

#### Funkcijas vērtību skaitļošanas kods grafika attēlošanai GNUPLOT vidē
```

```
