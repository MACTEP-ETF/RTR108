/*******************************************************************************
** Autors : Vladimirs Fedorovičs
** Mērķis : Apgūt masīvus (arrays) un tā satura kārtošanu/pārkārtošanu/izvadu
********************************************************************************/

#include<stdio.h>

float mediaanas_meklesana (int mas3[], int MasivaIzmers) // mediāna
{
 float mediaana = 0;
 if (MasivaIzmers%2 == 0) // ja elementu skaits ir paara
   mediaana = (mas3[(MasivaIzmers-1)/2] + mas3[MasivaIzmers/2])/2.0;
 else // ja elementu skaits ir nepaara
   mediaana = mas3[MasivaIzmers/2];
 return mediaana;
}

int moda (int mas3[], int MasivaIzmers) //moda
{
 int maxVertiba = 0, maxSkaits = 0, i, j;
 for (i=0; i<MasivaIzmers; ++i)
 {
  int skaititajs = 0;
  for (j=0; j<MasivaIzmers; ++j)
  {
   if (mas3[j] == mas3[i])
   ++skaititajs;
  }
  if (skaititajs > maxSkaits)
  {
   maxSkaits = skaititajs;
   maxVertiba = mas3[i];
  }
 }
 return maxVertiba;
}

int main()
{
 int i, j, k, l, z; // ciklu mainīgie
 int min, max;
 int Temp;
 int mas3[20] = {86, 108, 97, 100, 105, 109, 105, 114, 115, 32, 70, 101, 100, 111, 114, 111, 118, 105, 99, 115};
 int MasivaIzmers = sizeof(mas3)/sizeof(int);

 printf("\nSveicināti!\n");
 printf("1.) Lūdzu, ievadiet simbolu virkni līdz 200 zīmēm: \n");
 //scanf("%c", &mas3);

 for (i=0; i<MasivaIzmers; i++) // Bubble sort - kārtojam elementus augošā secībā
 {
  for (j=0; j<(MasivaIzmers-1); j++)
  {
   if (mas3[j] > mas3[j+1])
   {
    Temp = mas3[j];
    mas3[j] = mas3[j+1];
    mas3[j+1] = Temp;
   }
  }
 }
 
 //Meklējam minimālo vērtību
 min = mas3[0];
 for (i=0; i<MasivaIzmers; i++)
 {
  if (mas3[i] < min)
  min = mas3[i];
  else continue;
 }

 //Meklējam maksimālo vērtību
 max = mas3[0];
 for (i=0; i<MasivaIzmers; i++)
 {
  if (mas3[i] > max)
  max = mas3[i];
  else continue;
 }

 if (min==32)
 printf("2.) Kopas simbols ar minimālo vērtību ir 'astarpe'\n");
 else
 printf("2.) Kopas simbols ar minimālo vērtību: %c\n",min);
 
 printf("3.) Kopas simbols ar maksimālo vērtību ir '%c'\n", max);
 printf("4.) Kopas simbols ar vidējo vērtību: %c\n", 0);
 
 printf("5.) Sakārtotās kopas simbolu izvade: ");
 for (z=0; z<MasivaIzmers; z++)
 {printf("%c", mas3[z]); }

 printf("\n6.) Kopas mediānas vērtība: %.2f\n", mediaanas_meklesana(mas3, MasivaIzmers));
 printf("7.) Kopas moda: %d\t\n", moda (mas3, MasivaIzmers));

 printf("8.) Sakārtotās kopas izvade simbolu un ASCII koda ciparu veidā:\n");
 for (z=0; z<MasivaIzmers; z++) // izvada SAKAARTOTA masiiva burtu un atbistosu ASCII koda veidaa
 if (mas3[z] == 32)
  printf("Simbols: 'atstarpe'\tASCII kods: %d\n", mas3[z]);
 else
  printf("Simbols: %c\t\tASCII kods: %d\n", mas3[z], mas3[z]);

}


