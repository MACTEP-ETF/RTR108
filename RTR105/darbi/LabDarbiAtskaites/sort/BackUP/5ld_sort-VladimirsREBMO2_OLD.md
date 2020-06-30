# 5. laboratorijas darba - Darbs ar masīviem (array/sort) - atskaite
## Teorija
Masīvi ir tāda veida datu struktūra, kurā var saglabāt fiksēta izmēra secīgu viena veida elementu kolekciju. Datu kolekcijas glabāšanai izmanto masīvu, taču bieži vien ir lietderīgāk domāt par masīvu kā tāda paša veida mainīgo lielumu kolekciju.

Tā vietā, lai deklarētu atsevišķus mainīgos, piemēram, *skaitli0*, *skaitli1*, ... un *skaitli99*, mēs deklarējam vienu masīva mainīgo, piemēram, skaitļus, un izmantojam skaitļus [0], skaitļus [1] un ..., skaitļus [99], kā atsevišķos mainīgos. Kur jau konkrētajam masīva elementam var piekļūt ar indeksu.

Visi bloki sastāv no blakus esošām atmiņas vietām. Zemākā adrese atbilst pirmajam elementam, bet augstākā - pēdējam.

### Kods
```
/*******************************************************************************
** Autors : Vladimirs Fedorovičs
** Mērķis : Apgūt masīvus (arrays) un tā satura kārtošanu/pārkārtošanu/izvadu
********************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define izmers 100

float MedianaF(int a[], int b);

//MAIN sākums
int main()
{
 int i, j, k, l, abc, Temp; // ciklu mainīgie
 int MasGarums;
 int VidVert1, VidVert2, VidVert3; // Ieviešam divus mainīgos vidējā kopas simbola izdalīšanai un izvadīšanai

 char buferis[izmers];
 char *MasStart = buferis;
 int masivs[izmers];

 printf("\n\nSveicināti!\n");
 printf("1.) Lūdzu, ievadiet simbolu virkni (līdz %d zīmēm): \n", izmers);
 fgets(buferis,izmers,stdin);

 for(*MasStart, MasGarums=0; *MasStart!='\n'; *MasStart++, MasGarums++) //pārrkastam char masīvu -> int masīvā
 {masivs[MasGarums] = buferis[MasGarums];}

 for (i=0; i<MasGarums; i++) //Bubble sort - kārtojam elementus augošā secībā
  {
   for (j=0; j<(MasGarums-1); j++)
   {
    if (masivs[j] > masivs[j+1])
    {
     Temp = masivs[j];
     masivs[j] = masivs[j+1];
     masivs[j+1] = Temp;
    }
   }
  }

 //Meklējam minimālo vērtību
 char min = masivs[0];
 for (k=0; k<MasGarums; k++)
 {
  if (masivs[k] < min)
  min = masivs[k];
  else continue;
 }
 if (min==32)
 printf("\n2.) Kopas simbols ar minimālo vērtību ir 'astarpe'\n");
 else
 printf("2.) Kopas simbols ar minimālo vērtību: '%c'\n",min);

 //Meklējam maximālo vērtību
 char max = masivs[0];
 for (l=0; l<MasGarums; l++)
 {
  if (masivs[l] > max)
  max = masivs[l];
  else continue;
 }
 if (max==32)
 printf("3.) Kopas simbols ar maksimālo vērtību: 'astarpe'\n");
 else
 printf("3.) Kopas simbols ar maksimālo vērtību: '%c'\n",max);

 //Meklējam simbolu ar vidējo vērtību
 if (MasGarums%2 == 0) // ja elementu skaits ir pāra un vairāk par 2
 {
  VidVert1 = MasGarums/2;
  VidVert2 = MasGarums/2 - 1;
  printf("4.) Tā kā kopas simbolu skaits ir pāra,\n");
  printf("tad ir divi simboli ar vidējo vērtību: '%c' un '%c'\n",masivs[VidVert1],masivs[VidVert2]);
 }
 else
 {
  VidVert3 = MasGarums/2;
  printf("4.) Kopas simbols ar vidējo vērtību: '%c'\n", masivs[VidVert3]);
 }

 //izvadam kopu sakārtotu alfabēta secībā
 printf("5.) Sakārtots kopas saturs alfabēta secībā: ");
 for (abc=0; abc<MasGarums; abc++)
 {
  if (masivs[abc] == 32)
  printf("'atstarpe'");
  else
  printf("%c", masivs[abc]);
 }

 //izvadam mediānu
 printf("\n6.) Kopas mediānas vērtība: %.2f\n", MedianaF(masivs, MasGarums));

 //Izvadam modu
 int maxVertiba = 0, maxSkaits = 0, r, t;
 for (r=0; r<MasGarums; r++)
 {
  int skaititajs = 0;
  for (t=0; t<MasGarums; t++)
  {
   if (masivs[t] == masivs[r])
   skaititajs++;
  }
  if (skaititajs > maxSkaits)
  {
   maxSkaits = skaititajs;
   maxVertiba = masivs[r];
  }
 }
 printf("7.) Kopas moda: %d\t", maxVertiba);

 //Izvadam kopu divās kolonās kā simbolus un to ASCII koda veidā
 printf("\n\n8.) Izvadam kopu divās kolonās - kā simbolus un to ASCII koda veidā:\n");
 int z;
 for (z=0; z<MasGarums; z++) // izvada SAKAARTOTA masiiva burtu un atbistosu ASCII koda veidaa
  if (masivs[z] == 32)
   printf("Simbols: 'atstarpe'\tASCII kods: %d\n", masivs[z]);
  else
   printf("Simbols: %c\t\tASCII kods: %d\n", masivs[z], masivs[z]);

// MAIN beigas
}

float MedianaF(int a[], int b)
{
    float Med = 0;
    if (b%2 == 0) // ja elementu skaits ir paara
        Med = (a[(b-1)/2] + a[b/2])/2.0;
    else // ja elementu skaits ir nepaara
        Med = a[b/2];
    return Med;
}
```

### Rezultāts

```
Sveicināti!
1.) Lūdzu, ievadiet simbolu virkni (līdz 100 zīmēm): 
Es ceru, ka kods nav gluzi zemee metams.

2.) Kopas simbols ar minimālo vērtību ir 'astarpe'
3.) Kopas simbols ar maksimālo vērtību: 'z'
4.) Tā kā kopas simbolu skaits ir pāra,
tad ir divi simboli ar vidējo vērtību: 'g' un 'e'
5.) Sakārtots kopas saturs alfabēta secībā: 'atstarpe''atstarpe''atstarpe''atstarpe''atstarpe''atstarpe''atstarpe',.Eaaacdeeeeegikklmmmnorssstuuvzz
6.) Kopas mediānas vērtība: 102.00
7.) Kopas moda: 32	

8.) Izvadam kopu divās kolonās - kā simbolus un to ASCII koda veidā:
Simbols: 'atstarpe'	ASCII kods: 32
Simbols: 'atstarpe'	ASCII kods: 32
Simbols: 'atstarpe'	ASCII kods: 32
Simbols: 'atstarpe'	ASCII kods: 32
Simbols: 'atstarpe'	ASCII kods: 32
Simbols: 'atstarpe'	ASCII kods: 32
Simbols: 'atstarpe'	ASCII kods: 32
Simbols: ,		ASCII kods: 44
Simbols: .		ASCII kods: 46
Simbols: E		ASCII kods: 69
Simbols: a		ASCII kods: 97
Simbols: a		ASCII kods: 97
Simbols: a		ASCII kods: 97
Simbols: c		ASCII kods: 99
Simbols: d		ASCII kods: 100
Simbols: e		ASCII kods: 101
Simbols: e		ASCII kods: 101
Simbols: e		ASCII kods: 101
Simbols: e		ASCII kods: 101
Simbols: e		ASCII kods: 101
Simbols: g		ASCII kods: 103
Simbols: i		ASCII kods: 105
Simbols: k		ASCII kods: 107
Simbols: k		ASCII kods: 107
Simbols: l		ASCII kods: 108
Simbols: m		ASCII kods: 109
Simbols: m		ASCII kods: 109
Simbols: m		ASCII kods: 109
Simbols: n		ASCII kods: 110
Simbols: o		ASCII kods: 111
Simbols: r		ASCII kods: 114
Simbols: s		ASCII kods: 115
Simbols: s		ASCII kods: 115
Simbols: s		ASCII kods: 115
Simbols: t		ASCII kods: 116
Simbols: u		ASCII kods: 117
Simbols: u		ASCII kods: 117
Simbols: v		ASCII kods: 118
Simbols: z		ASCII kods: 122
Simbols: z		ASCII kods: 122
```
### Analīze
- Diemžēl, nespēju attēlot vairākas modas ja tādas ir, tādēļ tiek attēlota tikai viena no.
- Es atļāvos izvadīt kopu vertikālā veidā, jo tā ir pārskatamāk, ja simbolu virkne ir gara.

### Secinājums
Grūtākais šajā LabDarbā bija saprast, kā darboties ar char masīvu. Bet kad sapratu, ka kopu ir japārraksta no *char* datu tipa uz *int*, tad uzreiz visas problēmas atkrita kā nebijušas.
