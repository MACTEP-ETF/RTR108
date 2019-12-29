/*******************************************************************************
** Autors : Vladimirs Fedorovičs
** Mērķis : Apgūt masīvus (arrays) un tā satura kārtošanu/pārkārtošanu/izvadu
********************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define izmers 50

float MedianaF(int a[], int b);

int main()
{
 int i, j, k, l, abc, Temp; // ciklu mainīgie
 int MasGarums;

 char buferis[izmers];
 char *MasStart = buferis; 
 int masivs[izmers];

 printf("Sveicināti\n");
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
 printf("2.) Kopas simbols ar minimālo vērtību ir 'astarpe'\n");
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
 printf("3.) Kopas simbols ar maksimālo vērtību: %c\n",max);
  
 //printf("4.) Kopas elements ar vidējo vērtību JĀSATAISA VĒL!!!: %s\n", masivs);

 printf("5.) Sakārtots kopas saturs alfabēta secībā: ");
 for (abc=0; abc<MasGarums; abc++)
 {
  if (masivs[abc] == 32)
  printf("'atstarpe'");
  else
  printf("%c", masivs[abc]);
 }

 printf("\n6.) Kopas mediānas vērtība: %.2f\n", MedianaF(masivs, MasGarums));

 //Modas skaitļošana 
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
 printf("7.) Kopas moda(s): %d (%d)\n", maxVertiba, maxSkaits);
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
