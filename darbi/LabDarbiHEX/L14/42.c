/************************************
** Autors : Vladimirs Fedorovics
** Merkis : Masivi. Burbula metode. Datu kopas statistiskie raksturotaji
************************************/

#include<stdio.h>

float mediaanas_meklesana (int mas3[], int MasivaIzmers) // medianas apreekinaasana
{
    float mediaana = 0;
    if (MasivaIzmers%2 == 0) // ja elementu skaits ir paara
        mediaana = (mas3[(MasivaIzmers-1)/2] + mas3[MasivaIzmers/2])/2.0;
    else // ja elementu skaits ir nepaara
        mediaana = mas3[MasivaIzmers/2];
    return mediaana;
}

int moda (int mas3[], int MasivaIzmers)
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
    int i, j, k, l, z; // ciklu mainigie
    int min, max;
    float sum, mediaana = 0;
    int Temp; // iislaiciigais mainiigais
    int mas3[20] = {86, 108, 97, 100, 105, 109, 105, 114, 115, 0, 70, 101, 100, 111, 114, 111, 118, 105, 99, 115}; //kaartojamo skaitlju masiivs
    int MasivaIzmers = sizeof(mas3)/sizeof(int);

/*    printf("Nesakaartota masiiva burtu un atbilstosha ASCII koda veidaa:\n");
    for (z=0; z<(sizeof(mas3)/sizeof(int)); z++) // izvada NESAKAARTOTA masiiva burtu veidaa un atbistosu ASCII koda veidaa
        if (mas3[z] == 0)
            printf("Simbols: 'atstarpe'\tASCII kods: %d\n", mas3[z]);
        else
            printf("Simbols: %c\t\tASCII kods: %d\n", mas3[z], mas3[z]);
*/

    for (i=0; i<MasivaIzmers; i++) // cikliska masiiva kaartoshana ar burbuli
    {
        for (j=0; j<(MasivaIzmers-1); j++) // naakoshais cikls ir par vienu mazaaks
        {
            if (mas3[j] > mas3[j+1])
            {
                Temp = mas3[j];
                mas3[j] = mas3[j+1];
                mas3[j+1] = Temp;
            }
        }
    }

    printf("\n\nSakaartota masiiva burtu un atbilstosha ASCII koda veidaa:\n");
    for (z=0; z<MasivaIzmers; z++) // izvada SAKAARTOTA masiiva burtu un atbistosu ASCII koda veidaa
        if (mas3[z] == 0)
            printf("Simbols: 'atstarpe'\tASCII kods: %d\n", mas3[z]);
        else
            printf("Simbols: %c\t\tASCII kods: %d\n", mas3[z], mas3[z]);


    min = mas3[0];
    for (i=0; i<MasivaIzmers; i++)
    {
	if (mas3[i] < min)
	min = mas3[i];
	else continue;
    }

    max = mas3[0];
    for (i=0; i<MasivaIzmers; i++)
    {
	if (mas3[i] > max)
	max = mas3[i];
	else continue;
    }


    printf("\n\n[STATISTISKIE RAADIITAAJI]:\n");
    printf("(a) Masiiva izmeers: %d\n", MasivaIzmers);
    printf("(b) Masiiva minimaala veertiiba: %d\n", min);
    printf("(c) Masiiva maksimaala veertiiba: %d\n", max);

    sum = 0;
    for (l=0; l<MasivaIzmers; l++)
    {
        sum = sum + mas3[l]; // aprekinam visas kopas summu
    }
    printf("(d) Videejaa aritmeetiskaa kopas veertiiba: %.2f\n", sum/MasivaIzmers); // izvadam uz ekraana videjo aritmeetisko

    mediaana = mediaanas_meklesana(mas3, MasivaIzmers);
    printf("(e) Kopas mediaanas vertiiba: %.2f\n", mediaana); // mediaanas izvade


    printf("(f) Kopas moda ir: %d\t", moda (mas3, MasivaIzmers));
    printf("\n");

    printf("(g) Kopas modu skaits: Pagaidam nav aprekinats \n");
    return 0;
}


