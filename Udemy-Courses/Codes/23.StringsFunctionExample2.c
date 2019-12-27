#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char fname[30]="VLADimirs", lname[30]="fedorovics";
    printf("fname garums: %d\n\n", strlen(fname));
    printf("Ar maziem burtiem: %s\n\n", strlwr(fname));
    printf("Ar lieliem burtiem: %s\n\n", strupr(fname));
    printf("Reverss: %s\n\n", strrev(fname));
    strrev(fname);
    printf("Pilnais vards %s\n\n", strcat(fname,lname));
    printf("\n\n\n%d\n\n\n", strcmp("bbc","zbc"));
}
