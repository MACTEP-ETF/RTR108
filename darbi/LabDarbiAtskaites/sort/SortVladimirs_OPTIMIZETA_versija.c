/*******************************************************************************
** Autors : Vladimirs Fedorovičs
** Mērķis : Apgūt masīvus (arrays) un tā satura kārtošanu/pārkārtošanu/izvadu
** Versija : Optimizēts kods, 21.01.2020
********************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define izmers 100


void BubbleSort(int*, int);
void MinimalaVertiba(int*, int);
void MaksimalaVertiba(int*, int);
void VidejaVertiba(int*, int);
float Mediana(int*, int);
void Moda(int*, int);
void print(int*, int);

//MAIN sākums
int main()
{
 int i; // cikla mainīgais
 int MasGarums;
 char *buferis = malloc(izmers*sizeof(char));
 int *masivs = malloc(izmers*sizeof(int));
 char *MasStart = buferis;

 printf("\n\nSveicināti!\n");
 printf("1.) Lūdzu, ievadiet simbolu virkni (līdz %d zīmēm): \n", izmers);
 fgets(buferis,izmers,stdin);

 for(*MasStart, MasGarums=0; *MasStart!='\n'; *MasStart++, MasGarums++) //pārrkastam char masīvu -> int masīvā
 {masivs[MasGarums] = buferis[MasGarums];}


 MinimalaVertiba(masivs, MasGarums); //Minimālās vērtības izvade
 MaksimalaVertiba(masivs, MasGarums); //Maksimālās vērtības izvade
 VidejaVertiba(masivs, MasGarums); //Izvadam vidējo vērtību to skaitliskā un burta veidā

 printf("5.) Kopa tiek sakārtota augošā secībā, bet izvade netiek veikta, jo uzdevumā tas nav minēts šajā punkta.\n");
 BubbleSort(masivs, MasGarums); //Bubble sort

 printf("6.) Kopas mediānas vērtība: %.2f\n", Mediana(masivs, MasGarums)); //izvadam mediānu

 printf("7.) Kopas moda(s): Pagaidām SKAITĻO NEKOREKTI!!! - ");
 Moda(masivs, MasGarums); //Izvadam modu

 //Izvadam kopu divās rindās - kā simbolus un to ASCII koda veidā
 printf("8.) Izvadam kopu divās rindās - kā simbolus un to ASCII koda veidā:\n");
 print(masivs, MasGarums); //drukājam ārā simbolus
 return 0;
}
// MAIN beigas

void MinimalaVertiba(int* masivs, int MasGarums) //Meklējam minimālo vērtību
{
 int i;
 int min = masivs[0];
 for (i=0; i<MasGarums; i++)
 {
  if (masivs[i] < min)
  min = masivs[i];
 }
 if (min==32)
 printf("\n2.) Kopas simbols ar minimālo vērtību ir 'astarpe'\n");
 else
 printf("2.) Kopas simbols ar minimālo vērtību: '%c'\n",min);
}

void MaksimalaVertiba(int* masivs, int MasGarums) //Meklējam maksimālo vērtību
{
 int max = masivs[0];
 for (int i=0; i<MasGarums; i++)
 {
  if (masivs[i] > max)
  max = masivs[i];
 }
 if (max==32)
 printf("3.) Kopas simbols ar maksimālo vērtību: 'astarpe'\n");
 else
 printf("3.) Kopas simbols ar maksimālo vērtību: '%c'\n",max);
}

void VidejaVertiba(int* masivs, int MasGarums) //izvadam vidējo vērtību to skaitliskā un burta veidā
{
 int i, summa = 0, VidVertiba;
 for (int i=0; i<MasGarums; i++)
 {
  summa += masivs[i];
 }
 VidVertiba = summa/MasGarums;
 printf("4.) Kopas vidējā vērtība: '%d'. Un atbilstoš simbols šai vertībai ir: '%c'\n", VidVertiba, VidVertiba);
}

void BubbleSort(int* masivs, int MasGarums)
{
 int i, j, Temp;

 for (i=0; i<MasGarums; i++) //kārtojam elementus augošā secībā
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
}


float Mediana(int* a, int b)
{
 float Med = 0;
 if (b%2 == 0) // ja elementu skaits ir pāra
  Med = (a[(b-1)/2] + a[b/2])/2.0;
 else // ja elementu skaits ir nepāra
  Med = a[b/2];
 return Med;
}

void Moda(int* masivs, int MasGarums)
{
 int i, j, max_repeat;
 int *b=malloc(MasGarums*sizeof(int));
 for (i=0; i<MasGarums; i++)
 {
  b[i] += 1;
  if (max_repeat < masivs[i])
   max_repeat = masivs[i];
 }

 for (j=0; j<MasGarums; j++)
 {
  if (masivs[j] == max_repeat)
  {
   printf(" %d", j);
  }
 }
 printf("\n");
}


void print(int *masivs, int MasGarums)
{
 printf("Simbols:\n");
 for (int i=0; i<MasGarums; i++) // Izvadam sakārtotās kopas burtu un atbilstšu ASCII koda veidā
 {
  if (masivs[i] == 32)
  printf("' '\t");
  else
  printf("%c\t", masivs[i]);
 }
 printf("\nASCII kods:\n");
 
 for (int j=0; j<MasGarums; j++) // Izvadam sakārtotās kopas burtu un atbilstšu ASCII koda veidā
 {
  printf("%d\t", masivs[j]);
 }
 printf("\n");
}
