#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    /*char name[50];*/
    char *name;
    name=malloc(200*sizeof(char)); //allocate memory
    if(name==NULL)
        printf("Memory is not available!");
    else
    {
        strcpy(name,"Hi Student, hope the course is useful. You are practicing it and you are referring your friends.");
        printf("%s",name);
    }
    name=realloc(400*sizeof(char)); //allocate extra memory
    free(name); //free memory
    getch();
}
