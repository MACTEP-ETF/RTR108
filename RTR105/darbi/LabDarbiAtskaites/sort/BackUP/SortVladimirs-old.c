/***************************************************************************
** Autors : Vladimirs Fedorovičs
** Mērķis : Apgūt masīvus (arrays) un tā satura pārkārtošanu/izvadu
***************************************************************************/

#include<stdio.h>
#include<string.h>


int moda(int, int);
float mediana(int, int);

void main()
{
 //char MasElem;
 int i, j, k, l, z, w; // ciklu mainīgie
 int min, max, Temp, MasIzm = 0;
 char masivs[200];
 float Sum, MedVert;

 printf("Sveicināti\n");
 printf("Lūdzu, ievadiet simbolu virkni (līdz 200 zīmēm): \n");
 scanf("%[^\n]", &masivs);

 for (w=0; w != '/0'; w++)
 {MasIzm += 1;}

printf("Masīva izmērs: %d\n", MasIzm);
 printf("Masīva saturs: %s\n", masivs);
}
/*


 for (i=0; i<MasIzm; i++) //Bubble sort
  {
   for (j=0; j<(MasIzm-1); j++)
   {
    if (masivs[j] > masivs[j+1])
    {
     Temp = masivs[j];
     masivs[j] = masivs[j+1];
     masivs[j+1] = Temp;
    }
   }
  }

// printf("\n\nSkat. uzdevumu:\n");
 for (z=0; z<MasIzm; z++) //sakārto masīva elementus augošā kārtībā
  if (masivs[z] == 0)
  {printf("Simbols: 'atstarpe'\tASCII kods: %d\n", masivs[z]);}
  else
  {printf("Simbols: %c\t\tASCII kods: %d\n", masivs[z], masivs[z]);}

 min = masivs[0];
 for (i=0; i<MasIzm; i++)
  {
   if (masivs[i] < min)
   min = masivs[i];
   else continue;
  }

 max = masivs[0];
 for (i=0; i<MasIzm; i++)
 {
  if (masivs[i] > max)
  max = masivs[i];
  else continue;
 }

 printf("\n\n[STATISTISKIE RAADIITAAJI]:\n");
 printf("(a) Masīva izmērs: %d zīmes\n", MasIzm);
 printf("(b) Masīva minimālā vērtība: %d\n", min);
 printf("(c) Masīva maksimālā vērtība: %d\n", max);

 Sum = 0;
 for (l=0; l<MasIzm; l++) //aprēķinam visas kopas summu
 {Sum += masivs[l];}
 printf("(d) Vidējā arifmētiskā kopas vērtība: %.2f\n", sum/MasivaIzmers); // izvadam uz ekraana videjo aritmeetisko

 MedVert = mediana(masivs, MasIzm);
 printf("(e) Kopas mediānas vērtība: %.2f\n", MedVert); // mediaanas izvade
 printf("(f) Kopas moda: %d\t\n", moda(masivs, MasIzm));
 printf("(g) Kopas modu skaits: VĒL NAV izskaitļots!!! %d\n",0);
}



float mediana(int mas3[], int MasIzm) // mediānas aprēķināšana
{
 float Med = 0;

 if (MasivaIzmers%2 == 0) // ja elementu skaits ir pāra
 {Med = (mas3[(MasivaIzmers-1)/2.] + mas3[MasivaIzmers/2])/2.;}

 else // ja elementu skaits ir nepāra
 {Med = mas3[MasivaIzmers/2];}

 return Med;
}

int moda (int masivs[], int MasIzm)
{
 int maxVertiba = 0, maxSkaits = 0;
 int i, j;

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



*/

