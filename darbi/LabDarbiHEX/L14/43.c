/************************************
** Autors : Vladimirs Fedorovics
** Merkis : Masivu aizpilda lietotajs (char). Burbula metode. Datu sakartota izvade ar simboliem un atbilstosiem ASCII koda skaitliem
************************************/

#include<stdio.h>

int main()
{
    int i, j, k, l, m; // ciklu mainigie
    int Temp; // iislaiciigais mainiigais
    char mas[20]; //kaartojamo skaitlju masiivs
    int MasivaIzmers = sizeof(mas);//sizeof(int);

    start:
    printf("Ievadiet vaardu ar simbolu skaitu liidz 20: \n");

    for (i=0; i<MasivaIzmers; i++)
    scanf("%c", &mas[i]);

    if (mas[i]<20)
        goto next;

    if (mas[i]>20)
    {
        printf("Paarnsiegts simbolu limits!\n");
        goto start;
    }
    next:
     for (i=0; i<MasivaIzmers; i++) // cikliska masiiva kaartoshana ar burbuli
    {
        for (j=0; j<(MasivaIzmers-1); j++) // naakoshais cikls ir par vienu mazaaks
        {
            if (mas[j] > mas[j+1])
            {
                Temp = mas[j];
                mas[j] = mas[j+1];
                mas[j+1] = Temp;
            }
        }
    }

    printf("\n\nVertikaala saakaartota masiva izvade burtu un ASCII koda veidaa:\n");
    for (j=0; j<MasivaIzmers; j++) // izvada SAKAARTOTA masiiva burtu un atbistosu ASCII koda veidaa
        if (mas[j] == 32)
            printf("Simbols: 'atstarpe'\tASCII kods: %d\n", mas[j]);
        else
            printf("Simbols: %c\t\tASCII kods: %d\n", mas[j], mas[j]);

    printf("\n\nHorizontaalaa saakaartota masiva izvade burtu un ASCII koda veidaa:\n");
    for (j=0; j<MasivaIzmers; j++) // izvada SAKAARTOTA masiiva burtu un atbistosu ASCII koda veidaa
       printf("%c\t", mas[j]);

    printf("\n");
    for (j=0; j<MasivaIzmers; j++) // izvada SAKAARTOTA masiiva burtu un atbistosu ASCII koda veidaa
       printf("%d\t", mas[j]);

    printf("\n");
    return 0;
}
