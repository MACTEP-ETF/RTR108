#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("D:\\WORKS\\Content\\Hello.txt","r");
    if(fp==NULL)
    {
        printf("Nevar nolasiit failu");
    }
    else
    {
        ch=fgetc(fp);
        while(ch!=EOF)
        {
            printf("%c",ch);
            ch=fgetc(fp);
        }
        fclose(fp);
    }
    getch();
}
