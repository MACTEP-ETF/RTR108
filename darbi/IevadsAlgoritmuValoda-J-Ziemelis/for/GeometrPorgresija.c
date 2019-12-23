#include<stdio.h>
int main()
{
 int k;
 double reizinatajs, loceklis, summa;
 reizinatajs=0.98; loceklis=summa=125; /* Šeit summa tiek ieskaitīts jau pirmais loceklis */
 for(k=2; k<=100; ++k)
 {
  /* Cikla ir jāsāk summēt tikai ar 2. locekli */
  loceklis *= reizinatajs; //loceklis = loceklis * reizinātājs
  summa += loceklis;
 printf("%d. iterācija - Ģeometriskās progresijas starpsumma = %g\n", k, summa);

 }
 printf("Ģeometriskās progresijas summa = %g\n", summa);
 return 0;
}
