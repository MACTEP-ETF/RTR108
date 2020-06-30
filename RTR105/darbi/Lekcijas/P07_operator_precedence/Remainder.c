#include<stdio.h>

void main()
{

 int saucejs, dalitajs, vesela_dala, atlikums;
 printf("Ievadiet saucēju: ");
 scanf("%d", &saucejs);
 printf("Ievadiet dalītāju: ");
 scanf("%d", &dalitajs);

 vesela_dala = saucejs / dalitajs; //mainīgajam "vesela_dala" piešķiram dalīšanas rezultāta veselo daļu
 atlikums = saucejs % dalitajs; //mainīgajam "atlikums" piešķirma atlikumu, kas paliek dalīšanas rezultātā
 printf("Attēlosim rezultātu vienādojuma veidā:\n");
 printf("%d\\%d = %d (atlikums %d)\n", saucejs, dalitajs, vesela_dala, atlikums);

}
// komentārs un mājas darbs sev - ar šo var veikt DEC to BIN pārveidi :) izmantojot šo "%" darbību!
