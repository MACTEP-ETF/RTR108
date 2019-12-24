# 2. laboratorijas darba - Saknes (roots) - atskaite

## Teorija
Teilora rinda matemātikā ir funkcijai, kam punktā **a** eksistē visu kārtu atvasinājumi, piekārtota rinda, kuras parciālsummas ir polinomi. Šo rindu 1715. gadā publicējis angļu matemātiķis Bruks Teilors (*Brook Taylor*).  

### Kods
```



```
Šajā koda es neiekļāvu datu skaitļošanu priekš GNUPLOT grafika. To es uztaisīju atsevišķā failā.

### Rezultāts
```

```

### Analīze
  

### Funkcijas y=cos(x)\*cos(x) grafiks x vērtības intervālā:  \[-3.2;3.2\]  
![Funkcijas grafiks](https://github.com/MACTEP-ETF/RTR105/blob/master/darbi/LabDarbiAtskaites/series/GnuplotSeries/Funkcijas%20grafiks.png)

#### Funkcijas vērtību skaitļošanas kods grafika attēlošanai GNUPLOT vidē
```
#include<stdio.h>
#include<math.h>

void main()
{
 float x, y;
 FILE * fptr;

 fptr = fopen("SeriesGnuplot.dat","w");

 x = -22;
 while (x<22.01)
  {
   y = cos(x)*cos(x);
   fprintf(fptr,"%f\t%f\n",x,y);
   x += 0.01;
  }

 fclose(fptr);
}

```
