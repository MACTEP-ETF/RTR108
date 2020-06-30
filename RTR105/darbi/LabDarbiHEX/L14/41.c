/************************************
** Autors : Vladimirs Fedorovics
** Merkis : Masivi. Burbula metode. Datu kopas statistiskie raksturotaji
************************************/

#include<stdio.h>

float mediaanas_meklesana(int mas3[], int m) // medianas apreekinaasana
{
    float mediaana = 0;
    if(m%2 == 0) // ja elementu skaits ir paara
        mediaana = (mas3[(m-1)/2] + mas3[m/2])/2.0;
    else // ja elementu skaits ir nepaara
        mediaana = mas3[m/2];
    return mediaana;
}

int moda(int mas3[],int m)
{
   int maxVertiba = 0, maxSkaits = 0, i, j;

   for (i = 0; i < m; ++i)
   {
      int skaititajs = 0;

      for (j = 0; j < m; ++j)
      {
         if (mas3[j] == mas3[i])
         ++skaititajs;
      }

      if (skaititajs > maxSkaits)
      {
         maxSkaits = skaititajs;
         maxVertiba = mas3[i];
      }
      /* else if (skaititajs == maxSkaits) // modas parbaude
        printf("Kopai nav modas\n"); // modas izvade
      else
        printf("Kopas modas veertiba ir %d\n", moda(mas3,m)); // modas izvade
      */
   }
   return maxVertiba;
}

int main()
{
    int i, j, k, l; // ciklu mainigie
    int m = 5; // Kopas izmeers
    float sum, mediaana = 0;
    int Temp; // iislaiciigais mainiigais
    int mas3[] = {2, 5, 3, 7, 0}; //kaartojamo skaitlju masiivs
    printf("Masiiva izmeers = %d\n", sizeof(mas3)/sizeof(int));

    sum = 0;
    for (l=0; l<5; l++)
    {
        sum = sum + mas3[l]; // aprekinam visas kopas summu
    }
    printf("Videejaa aritmeetiskaa kopas veertiiba ir %.2f\n", sum/5); // izvadam uz ekraana videjo aritmeetisko

    for (i=0; i<5; i++) // cikliska masiiva kaartoshana ar burbuli
    {
        for (j=0; j<(5-1); j++) // naakoshais cikls ir par vienu mazaaks
        {
            if (mas3[j] > mas3[j+1])
            {
                Temp = mas3[j];
                mas3[j] = mas3[j+1];
                mas3[j+1] = Temp;
            }
        }
    }
    mediaana = mediaanas_meklesana(mas3, m);
    printf("Kopas mediaanas vertiiba ir %.2f\n", mediaana); // mediaanas izvade

    for (k=0; k<5; k++)
        printf("%d, ", mas3[k]);
    printf("\n");
    return 0;
}


