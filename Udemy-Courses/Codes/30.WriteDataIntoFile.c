#include<stdio.h>
#include<conio.h>
void main()
{
    char data[200];
    FILE *fp;
    //fp=fopen("D:\\WORKS\\Content\\Hello.txt","w");
    fp=fopen("D:\\WORKS\\Content\\Hello.txt","a");
    if(fp==NULL)
    {
        printf("Nevaru atvert failu");
    }
    else
    {
        printf("Enter any sentence to write into file: ");
        gets(data);

        fprintf(fp,"\n%s",data);

        fclose(fp);

        printf("Data saved in file!");
    }
    getch();
}
