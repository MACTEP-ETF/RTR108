/*******************************************************************************
** Autors : Vladimirs Fedorovičs
** Mērķis : Apgūt masīvus (arrays) un tā satura kārtošanu/pārkārtošanu/izvadu
********************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define izmers 256

int main()
{
 int i, j, k, l, Temp; // ciklu mainīgie
 int MasGarums;

 char masivs[izmers];
 char *MasStart = masivs; //saglabājam masīva sākuma adresi iekš pointera

 printf("Sveicināti\n");
 Start:
 printf("1.) Lūdzu, ievadiet simbolu virkni (līdz %d zīmēm): \n", izmers);
 fgets(masivs,izmers,stdin); //Jāizdomā, kā pārbaudīt, lai nepārsniedz pieļaujamo simbolu virknes garumu...

 while(*MasStart++ !='\n') //skaitļojam masīva garumu
 {MasGarums = MasGarums + 1;}

 //printf("Kopas garums ir %d simboli\n", MasGarums); //galaprogramma izdzēst šo rindiņu

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
 printf("2.) Kopas simbols ar minimālo vērtību: %c\n",min);

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

printf("5.) Sakārtots kopas saturs alfabēta secībā: %s\n", masivs);

float Mediana;
 if (MasGarums%2 == 0) // ja elementu skaits ir pāra
 {Mediana = ((MasGarums-1)/2. + (MasGarums/2))/2.;}
 else // ja elementu skaits ir nepāra
 {Mediana = MasGarums/2;}

//printf("6.) Kopas mediānas vērtība: %d\n", masivs[Mediana]);

// printf("(f) Kopas moda(s): %d\t\n", moda(masivs, MasGarums));
}

/*
int MedianaF(int X)
{
 float Mediana;
 if (X%2 == 0) // ja elementu skaits ir pāra
 {Mediana = ((MasGarums-1)/2.) + (MasGarums/2))/2.;}
 else // ja elementu skaits ir nepāra
 {Mediana = MasGarums/2;}
 return Mediana;
}


 int MODmaxVertiba = 0, maxSkaits = 0;
 int n, m;

 for (n=0; n<MasGarums; n++)
 {
  int skaititajs = 0;

  for (m=0; m<MasGarums; n++)
  {
   if (masivs[m] == masivs[n])
   ++skaititajs;
  }

  if (skaititajs > maxSkaits)
  {
   maxSkaits = skaititajs;
   MODmaxVertiba = masivs[n];
  }
 }

*/

