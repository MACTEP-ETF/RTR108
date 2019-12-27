#include<stdio.h>
#include<conio.h>
void main()
{
    int input;
    printf("Enter any number: ");
    scanf("%d", &input);

    /*
    if(input%2==0)
        printf("Even");
    else
        printf("Odd Number");
    */
    (input%2==0)?printf("Even Number"):printf("Odd Number");
    getch();
}
