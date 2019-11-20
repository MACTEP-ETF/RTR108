/************************************
** Autors : Vladimirs Fedorovics
** Merkis : Masivi. Burbula metode. Datu kopas statistiskie raksturotaji
************************************/

#include<stdio.h>

int main()
{
    int i, j, k; // ciklu mainigie
    int Temp; // iislaiciigais mainiigais
    int mas3[] = {2, 5, 3, 7, 0}; //kaartojamo skaitlju masiivs
    printf("Masiiva izmeers = %d\n", sizeof(mas3)/sizeof(int));

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
    for (k=0; k<5; k++)
        printf("%d, ", mas3[k]);
    printf("\n");
}

