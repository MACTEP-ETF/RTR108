# 4. laboratorijas darba - Integrālis (integral) - atskaite
## Teorija
#### Taisnstūra metode
[Taisnstūra metode](https://chemicalstatistician.wordpress.com/2014/01/20/rectangular-integration-a-k-a-the-midpoint-rule/) ir skaitliska integrācijas metode, kas tuvina funkcijas integrāciju ar taisnstūri. Lai tuvinātu laukumu zem līknes, tā izmanto taisnstūrus.

#### Trapecveida metode
[Trapecveida metode](https://www.math24.net/trapezoidal-rule/) ir viena mainīgā funkcijas skaitliskās integrācijas metode, kas sastāv no katra elementārā segmenta aizvietošanas ar pirmās pakāpes polinomu, tas ir, ar lineāru funkciju. Platību zem funkciju diagrammas tuvina taisnstūrveida trapeces.  

#### Simpsona metode
[Simpsona metode](https://www.math24.net/simpsons-rule/) ir skaitliska metode, kas, izmantojot kvadrātiskās funkcijas, tuvina noteikta integrāla vērtību.  

### Kods
```
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
```
**Trapecveida metode** tika studēta šajā [vietnē](https://www.math24.net/trapezoidal-rule/). Pārējās divas metodes tika studētas no grāmatas "Ievads algoritmu valodā C" (J. Ziemelis).  

**Tālāk izskatīsim, kā rezultātu ietekmē *delta_x* precizitātes vērtība.**  

### Rezultāts Nr1 ar delta_x = 0.0001

```
Sveicināti!
Šī programma aprēķina funkcijas cos(x)*cos(x) integrālu pēc trīm metodēm:
taisnstūra, trapecveida, Simpsona.
Lūdzu, nosakiet x vērtības intervālu [a;b].
a = -3.2
b = 0.5

Kā arī, nosakiet ar kādu soli (delta_x) mēs šo intervālu izskatīsim.
delta_x = 0.0001
Integrālis pēc taisnstūra metodes: 2.08951
Integrālis pēc trapecveida metodes: 2.08951
Integrālis pēc Simpsona metodes: 2.08943
```
### Analīze Nr1
Pēc *WolframAlpha* aprēķiniem manai funkcijai dotā **x** vērtību apgabalā \[-3.2;0.5\] secinu, ka mana programma pilnīgi korekti izskaitļo integrālu pēc taisnstūra un trapecveida metodēm. Mikroskopiska nobīde ir Simpsona metodei.  
![WolframAlpha](https://github.com/MACTEP-ETF/RTR108/blob/master/RTR105/darbi/LabDarbiAtskaites/integral/WolframAlpha.PNG)

### Rezultāts Nr2 ar delta_x = 0.1

```
Sveicināti!
Šī programma aprēķina funkcijas cos(x)*cos(x) integrālu pēc trīm metodēm:
taisnstūra, trapecveida, Simpsona.
Lūdzu, nosakiet x vērtības intervālu [a;b].
a = -3.2
b = 0.5

Kā arī, nosakiet ar kādu soli (delta_x) mēs šo intervālu izskatīsim.
delta_x = 0.1
Integrālis pēc taisnstūra metodes: 2.09826
Integrālis pēc trapecveida metodes: 2.08871
Integrālis pēc Simpsona metodes: 2.01275
```

### Analīze Nr2
Šeit jau varam redzēt, ka vienīgi **trapecveida metode ir korekta**. Taisnstūra metode vēl kaut cik der, bet Simpsona metode ir pati neprecīzākā pie šīs delta_x vērtības!  

### Rezultāts Nr3 ar delta_x = 10
Šeit esmu paņēmu citu **x** vērtību apgabalu [-50;50], lai būtu uzskatāmāks ar šo *delta_x* vērtību.  

```
Sveicināti!
Šī programma aprēķina funkcijas cos(x)*cos(x) integrālu pēc trīm metodēm:
taisnstūra, trapecveida, Simpsona.
Lūdzu, nosakiet x vērtības intervālu [a;b].
a = -50
b = 50

Kā arī, nosakiet ar kādu soli (delta_x) mēs šo intervālu izskatīsim.
delta_x = 10
Integrālis pēc taisnstūra metodes: 97.8239
Integrālis pēc trapecveida metodes: 46.095
Integrālis pēc Simpsona metodes: 89.9252
```

### Analīze Nr3
Pie šīs *delta_x* vērtības, rezultāti jau ir **pavisam šķērsām taisnstūra** un **Simpsona metodēm**!  

### Secinājums
- **Trapecveida metode ir pati precīzākā**, jo solis (*delta_x*) viņu praktiski neietekmē. Kā arī viņa atbilst [*WolframAlpha*](https://www.wolframalpha.com/input/?i=Integral+cos%5E2%28x%29+from+-3.2+to+0.5) rezultātiem.
- **Taisnstūra** un **Simpsona metodes** ir ļoti atkarīgas no soļa vērtības. Jo lielaks *delta_x*, jo neprecīzāk skaitļo integrāli! Kā arī šo divu metožu algoritmi ir sarežģītāki nekā trapecveida metodei.  
- **Secinu, ka manai funkcijai cos<sup>2</sup>(x) trapecveida metode ir pati piemērotākā!**

### Funkcijas y=cos(x)\*cos(x) grafiki  
#### Funkcijas grafiks, x intervāls: \[-4;4\], taču integrāls tika izskaitļots pie x intervāla \[-3.2;0.5\]  
![GrafiksIntegralis](https://github.com/MACTEP-ETF/RTR108/blob/master/RTR105/darbi/LabDarbiAtskaites/integral/GrafiksIntegralis.png)  

P.S. Šo grafiku nebija nepieciešamība zīmēt ar *DAT* failu. Visas GNUPLOT komandas ierakstīju šajā failā [*PlotSettingFileIntegral.gp*](https://github.com/MACTEP-ETF/RTR108/blob/master/RTR105/darbi/LabDarbiAtskaites/integral/PlotSettingFileIntegral.gp)  
Kā arī atsevišķi izkopēju šeit, lai ir pārskatamāk:  
```
# Set plot
set xlabel "x"
set ylabel "y"
set grid
set key right bottom
set title "Funkcija cos^2(x), 'x' intervals [-4;4], tacu integralis tika aprekinats pie 'x' intervala [-3.2;0.5]"
plot [-4:4] (cos(x))**2 with lines lc "black" lw 2 title ""
replot [-3.2:0.5] (cos(x))**2 with filledcurves r=-1 lc "red" lw 2 title "integralis"
replot [-4:4] (cos(x))**2 with lines lc "black" lw 2 title "cos^2(x)"
```
