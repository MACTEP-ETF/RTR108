#include<stdio.h>
#include<conio.h>
/*****************
Author : Vladimirs Fedorovics
Purpose : To read a number from user and check eve / odd
***************/
void main()
{
    // Varianble Declaration
    int input;

    //Read number from user
    printf("Enter any number: ");
    scanf("%d", &input);

    //Logic
    if(input==0)
        printf("The number is Zero", input);
    else if(input%2==0)
        printf("%d is Even Number", input);
    else
        printf("%d is Odd Number", input);
    getch();


}
