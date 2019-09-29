/* Programmas autors: Vladimirs Fedorovičs
Programma saņem datus (vienu simbolu) no konsoles
un izvada uz ekrāna kā simbolu */

#include <stdio.h>

int main ()
{
	printf("Ievadi simbolu:"); //Dialoga izvade
	char abc; //Tiek deklarēts mainīgais
	scanf("%c", &abc); //klaviatūras dati tiek iekopēti

	printf("%c\n", abc); //Šī ir mainīgā "abc" formatētā izdruka uz ekrāna.
	//Dati tiek izvadīti kā SIMBOLS

	printf("%d\n", abc); //Decimals
	printf("%x\n", abc); //Sedecimāls

}
