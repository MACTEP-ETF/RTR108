/* Program 02.c*/
# include <stdio.h>
# include <limits.h>

int main ()
{
	int a = 50000; //50 ,000
	long int b = 1000000; //1 ,000, 000
	long int c = a * b; //Kāds ir sagaidāms rezultāts?

	printf("int datu tipa izmērs ir: %ld baiti \n", sizeof (int));
	printf("Aprēķinam a un b reizinājumu: \n");
	printf("a = %d, b = %ld \n", a, b);
	printf("c = a * b = %d * %ld = %ld \n", a, b, c); //rezultāts uz ekrāna
}
