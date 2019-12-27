#include<stdio.h>
#include<conio.h>
void main()
{
    int i=4;
    printf("Sveiki!\n");
    printf("Ka Tev iet?\n");
    if(i==5)
        goto end;
    printf("Vai viss ir labi?\n");
    printf("Ja ne, tad meginiet saprast :D\n");
    end:
        printf("Ata!\n");
}
