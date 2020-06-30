#include <stdio.h>

char x;

int fun () {
	char delta = 2;
	x = x + delta;
	return x;
}

int main () {
	x = 18+32;
	printf("Pirms, %c \n", x);
	//Šeit parādās simbols "2", jo 50 simbols pēc ASCII kodu kartes ir "2"

	fun ();
	printf("Pēc 1 reizes, %c \n", x);
	/*Pēc 1. reizes parādās simbols "4", jo pieskaitot pie esošās "x" vērtības klāt 2,
	 sanāk, ka drukājas 52 simbols pēc ASCII kodu kartes*/

	fun ();
	printf("Pēc 2 reizes, %c \n", x);
	//Pēc 2. reizes parādās simbols "/", jo kārtējo reizi pieskaitot: 52 + 2 = 54
}


