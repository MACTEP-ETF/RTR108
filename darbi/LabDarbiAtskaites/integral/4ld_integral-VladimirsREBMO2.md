# 4. laboratorijas darba - Integrālis (integral) - atskaite
## Teorija
3 dažādas teorijas
Aprasts...


### Kods
```


```
**Trapezoidālā metode** tika studēta šajā [vietnē](https://www.math24.net/trapezoidal-rule/).Pārējās divas metodes tika studētas no grāmatas "Ievads algoritmu valodā C" (J. Ziemelis).  

**Tālāk izskatīsim kā rezultātu ietekmē delta_x precizitātes vērtība.**  

### Rezultāts Nr1 ar delta_x = 0.0001

```
Sveicināti!
Šī programma aprēķina funkcijas cos(x)*cos(x) integrālu pēc trīm metodēm:
taisnstūra, trapezoidālas, Simsona.
Lūdzu, nosakiet x vērtības intervālu [a;b].
a = -3.2
b = 0.5

Kā arī, nosakiet ar kādu soli (delta_x) mēs šo intervālu izskatīsim.
delta_x = 0.0001
Integrālis pēc taisnstūra metodes: 2.08951
Integrālis pēc trapezoidālās metodes: 2.08951
Integrālis pēc Simsona metodes: 2.08943
```
### Analīze Nr1
Pie precizitātes sliekša (delta_x) = 0.0001 gandrīz visas metodes skaitļo korekti. Mikroskopiska nobīde ir Simsona metodei.  

### Rezultāts Nr2 ar delta_x = 0.1

```
Sveicināti!
Šī programma aprēķina funkcijas cos(x)*cos(x) integrālu pēc trīm metodēm:
taisnstūra, trapezoidālas, Simsona.
Lūdzu, nosakiet x vērtības intervālu [a;b].
a = -3.2
b = 0.5

Kā arī, nosakiet ar kādu soli (delta_x) mēs šo intervālu izskatīsim.
delta_x = 0.1
Integrālis pēc taisnstūra metodes: 2.09826
Integrālis pēc trapezoidālās metodes: 2.08871
Integrālis pēc Simsona metodes: 2.01275
```

### Analīze Nr2
Šeit jau varam redzēt, ka vienīgi trapezoidālā metode ir korekta. Taisnstūra metode vēl kaut cik der, bet Simsona metode ir pati neprecīzākā pie šīs delta_x vērtības!

### Rezultāts Nr3 ar delta_x = 10
Šeit esmu paņēmu citu **x** vērtību apgabalu [-50;50], lai būtu uzskatāmāks ar šo *delta_x* vērtību.  

```
Sveicināti!
Šī programma aprēķina funkcijas cos(x)*cos(x) integrālu pēc trīm metodēm:
taisnstūra, trapezoidālas, Simsona.
Lūdzu, nosakiet x vērtības intervālu [a;b].
a = -50
b = 50

Kā arī, nosakiet ar kādu soli (delta_x) mēs šo intervālu izskatīsim.
delta_x = 10
Integrālis pēc taisnstūra metodes: 97.8239
Integrālis pēc trapezoidālās metodes: 46.095
Integrālis pēc Simsona metodes: 89.9252
```

### Analīze Nr3
Pie šīs *delta_x* vērtības, rezultāti jau ir **pavisam šķērsām taisnstūra** un **Simsona metodēm**!


### Secinājums
Trapezoidālā metode ir pati precīzākā, jo solis (delta_x) viņu praktiski neietekmē. Kā arī viņa atbilst *WolframAlpha* rezultatiem. Savukārt pārējās divas ir ļoti atkarīgas no soļa vērtības. Jo lielaks delta_x, jo neprecīzāka integrālis! 

### Funkcijas y=cos(x)\*cos(x) grafiki  
#### Funkcijas grafiks, x intervāls: \[-4;4\], taču integrāls tika izskaitļots pie x intervāla \[-3.2;0.5\]  
![GrafiksIntegralis](https://github.com/MACTEP-ETF/RTR105/blob/master/darbi/LabDarbiAtskaites/integral/GrafiksIntegralis.png)

P.S. Šo grafiku nebija nepieciešamība zīmēt ar *DAT* failu. Visas GNUPLOT komandas ierakstīju šajā failā [*PlotSettingFileIntegral.gp*](https://github.com/MACTEP-ETF/RTR105/blob/master/darbi/LabDarbiAtskaites/integral/PlotSettingFileIntegral.gp)
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
