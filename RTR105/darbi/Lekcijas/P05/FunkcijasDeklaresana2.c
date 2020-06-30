#include <stdio.h>

int fun () {
	char x = 18+32;
	char delta = 2;
	x = x + delta;
	return x;
}

int main () {
	char x = 18+32;
	printf("Pirms, %c \n", x);
	//Šeit parādās simbols "2", jo 18+32=50 - simbols pēc ASCII kodu kartes ir "2"

	fun ();
	printf("Pēc 1 reizes, %c \n", x);
	/*Pēc 1. reizes parādās simbols "2", jo funkcija "fun" tiek ignorēta!
	Iemesls ļoti vienkāršs - lai operētu ar mainīgo "x" vairākās funkcijās, ir nepieciešams
	definēt pašu mainīgo ārpus funkcijām, nevis katrā no tām! Mainīgais "x" NEVAR būt mainīts
	ārpus esošās funkcijas, tādēļ arī rezultāts tiek drukāts tāds pats kā iepriekš!*/

	fun ();
	printf("Pēc 2 reizes, %c \n", x);
	//Pēc 2. reizes parādās simbols "2", jo funkcija "fun" tiek ignorēta!
}


