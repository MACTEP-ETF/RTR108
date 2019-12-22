# 1. laboratorijas darba - Teilora rindas - atskaite

## Teorija
Teilora rinda matemātikā ir funkcijai, kam punktā **a** eksistē visu kārtu atvasinājumi, piekārtota rinda, kuras parciālsummas ir polinomi. Šo rindu 1715. gadā publicējis angļu matemātiķis Bruks Teilors (*Brook Taylor*).  

### Kods
```
/***************************************************************************************************
Laboratorijas darbs : Nr.1.
Autors : Vladimirs Fedorovics
Merkis : Uzrakstiit algoritmu, kurs apreekina funkcijas y=cos(x)*cos(x) veertiibu. Variants Nr12.
***************************************************************************************************/

#include<stdio.h>
#include<math.h>

void main()
{
 long double x, y, a, S;
 long double b = 0; //priekspeedeejais saskaitaamais
 int k = 1;

 printf("\nSveicinaati!\n");
 printf("Sii programma apreekina funkcijas 'y=cos(x)*cos(x)' veertiibu!\nDiemzeel, korekti skaitljo peec Teilora rindas tikai pie 'x' intervaalaa [-22;22]\n");
 start:
 printf("\nLuudzu ievadiet 'x' veertiibu: ");
 scanf("%Lf",&x);

 if(x<-22 | x>22)
 {
  printf("Luudzu ievadiet citu skaitli. Pieveersiet uzmaniibu 'x' veertiibas intervaalam!\n");
  goto start;
 }
 else
 {
  a = (pow(-1,k+1)*pow(x,2*k)*pow(2,2*k-1))/(1.*1*2);
  S = a;

  while(k<500)
  {
   a = a * (((-1)*x*x*4)/((2*k-1)*(2*k)));
   S = S + a;
   k++;
   if (k == 499)
   {
    b = a;// saglabaajam priekspeedeejo saskaitaamo
   }
  }

  // atteelosim rezultaatus
  y = cos(x)*cos(x);
  printf("\nApreekins izmantojot funkciju:\ny=cos(%.2Lf)*cos(%.2Lf)=%.2Lf\n\n",x,x,y); //izvadam gala rezultatu uz ekrana
  printf("Apreekins peec Teilora rindas:\ny=%.2Lf\n\n",1-S);
  printf("Priekspeedeejais Teilora rindas saskaitaamais (ar 3000 ziimeem pec komata): %.3000Lf\n\n",b); //izvadam konkretu saskaitamo uz ekrana
  printf("Peedeejais Teilora rindas saskaitaamais (ar 3000 ziimeem pec komata): %.3000Lf\n\n",a); //izvadam konkretu saskaitamo uz ekrana
 }


printf("Teilora rindas atteelosana funkcijai 'y=cos(x)*cos(x)' ASCII kodaa:\n\n");

printf("                   5  0  0\n");
printf("  /|            ____________\n");
printf(" / |            \\          |\n");
printf("/  |             \\                  k+1       2*k      2*k-1\n");
printf("   |              \\             (-1)     *   x     *  2\n");
printf("   |   ------     /          ---------------------------------\n");
printf("   |             /                       ( 2 * k ) !\n");
printf("   |            /\n");
printf("   |           /___________|\n");
printf("                   k = 1\n");


printf("\n\n\n\nRekurences atteelosana funkcijai 'y=cos(x)*cos(x)' ASCII kodaa:\n\n");

printf("           1\n");
printf("       (-1)  * x * x * 4\n");
printf("   --------------------------\n");
printf("     (2 * k - 1) * (2 * k)\n\n\n\n");

}
```
Šajā koda es neiekļāvu datu skaitļošanu priekš GNUPLOT grafika. To es uztaisīju atsevišķā failā (viņu var atrast apakšfolderī GnuplotSeries – *FunkcijasVertibuKalkulacija.c*, kā arī datu failu priekš GNUPLOTa) izmantojot jau iebūvēto *math.h* bilbiotēku funkcijas skaitļošanai: y=cos(x)\*cos(x).  

### Rezultāts
```
Hello, World!
```

### Analīze
Neizskaidrojama iemesla pēc, programma spēj korekti izskaitļot funkciju ar **x** vērtību intervāla: \[-22;22\].  

### Bildes
![Funkcijas grafiks](https://github.com/MACTEP-ETF/RTR105/blob/master/darbi/LabDarbiAtskaites/series/GnuplotSeries/Funkcijas%20grafiks.png)
