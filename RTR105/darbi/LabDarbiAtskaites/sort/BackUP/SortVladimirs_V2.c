/*******************************************************************************
** Autors : Vladimirs Fedorovičs
** Mērķis : Apgūt masīvus (arrays) un tā satura kārtošanu/pārkārtošanu/izvadu
********************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define izmers 256

void main()
{
 int i, j, k, l, q, Temp; // ciklu mainīgie
 int MasGarums, TempRewrite;
 float MedVert;
 int array[];

 char buferis[izmers];
 char *BufStart = buferis; //saglabājam bufera sākuma adresi iekš pointera

 printf("Sveicināti\n");
 Start:
 printf("1.) Lūdzu, ievadiet simbolu virkni (līdz %d zīmēm): \n", izmers);
 scanf("%d", &masivs[]);
//fgets(buferis,izmers,stdin); //Jāizdomā, kā pārbaudīt, lai nepārsniedz pieļaujamo simbolu virknes garumu...

 while(*BufStart++ !='\n') //skaitļojam bufera garumu, lai pārrkastītu jau int tipa masīvā
 {MasGarums++;}
 int masivs[MasGarums];


 //pārrakstam masīvu int tipa masīvā!
 int N;
 N = MasGarums;
 int masivs[N];
 for (q=0; q<MasGarums; q++)
 {
  TempRewrite = buferis[q];
  masivs[q] = TempRewrite;
 }
*/

 printf("Kopas garums ir %d simboli\n", MasGarums); //galaprogramma izdzēst šo rindiņu

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
 int min = masivs[0];
 for (k=0; k<MasGarums; k++)
 {
  if (masivs[k] < min)
  min = masivs[k];
  else continue;
 }
 if (min==32)
 printf("2.) Kopas simbols ar minimālo vērtību ir 'astarpe'\n");
 else
 printf("2.) Kopas simbols ar minimālo vērtību: %c\n",min);

 //Meklējam maximālo vērtību
 int max = masivs[0];
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
 //printf("4.) Kopas elements ar vidējo vērtību JĀSATAISA VĒL!!!: %d\n", masivs);
 //printf("5.) Sakārtots kopas saturs: %d\n", masivs);

 //Meklējam mediānu
 float Med = 0;
 if (MasGarums%2 == 0) // ja elementu skaits ir pāra
 {Med = (masivs[(MasGarums-1)/2.] + masivs[MasGarums/2])/2.;}
 else // ja elementu skaits ir nepāra
 {Med = masivs[MasGarums/2];}

 printf("6.) Kopas mediānas vērtība: %.2f\n", Med);
}

// printf("(f) Kopas moda(s): %d\t\n", moda(masivs, MasGarums));

/*

int moda (int masivs[], int MasGarums)
{
 int MODmaxVertiba = 0, maxSkaits = 0;
 int i, j;

 for (i=0; i<MasGarums; i++)
 {
  int skaititajs = 0;

  for (j=0; j<MasGarums; j++)
  {
   if (masivs[j] == masivs[i])
   ++skaititajs;
  }

  if (skaititajs > maxSkaits)
  {
   maxSkaits = skaititajs;
   MODmaxVertiba = masivs[i];
  }
 }
 return MODmaxVertiba;
}

*/

