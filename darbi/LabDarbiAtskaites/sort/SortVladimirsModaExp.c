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
/*
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
*/

 //Izvadam modu
 int maxVertiba1 = 0, maxSkaits1 = 0, maxVertiba2 = 0, maxSkaits2 = 0, r, t;
 for (r=0; r<MasGarums; r++)
 {
  int skaititajs1 = 0;
  for (t=0; t<MasGarums; t++)
  {
   if (masivs[t] == masivs[r])
   skaititajs1++;
  }
  if (skaititajs1 > maxSkaits1)
  {
   maxSkaits1 = skaititajs1;
   maxVertiba1 = masivs[r];
  }
 }

 for (r=0; r<MasGarums; r++)
 {
  int skaititajs2 = 0;
  for (t=0; t<MasGarums; t++)
  {
   if (masivs[t] == masivs[r])
   skaititajs2++;
  }
  if (skaititajs2 > maxSkaits2)
  {
   maxSkaits2 = skaititajs2;
   maxVertiba2 = masivs[r];
  }
  if (maxVertiba1==maxVertiba2)
  {
    printf("7.) Kopas modas: %d\t", maxVertiba2);
  }
 }



 printf("7.) Kopas moda: %d\t", maxVertiba1);
/*
 //Izvadam kopu divās kolonās kā simbolus un to ASCII koda veidā
 printf("\n\n8.) Izvadam kopu divās kolonās - kā simbolus un to ASCII koda veidā:\n");
 int z;
 for (z=0; z<MasGarums; z++) // izvada SAKAARTOTA masiiva burtu un atbistosu ASCII koda veidaa
  if (masivs[z] == 32)
   printf("Simbols: 'atstarpe'\tASCII kods: %d\n", masivs[z]);
  else
   printf("Simbols: %c\t\tASCII kods: %d\n", masivs[z], masivs[z]);
*/
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
