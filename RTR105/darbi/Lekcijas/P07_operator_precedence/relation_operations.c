#include<stdio.h>

int main()
{
 int a, b;
 printf("Apskatīsim salīdzināsanas darbības starp diviem veseliem skaitļiem\n");
 printf("ievadiet 1. skaitli: ");
 scanf("%d", &a);
 printf("ievadiet 2. skaitli: ");
 scanf("%d", &b);

  if (a > b)
  {
  printf("%d>%d\n", a, b); //drukājam, ja 1. skaitlis ir lielāks par 2.
  }
  else if (a < b)
  {
  printf("%d<%d\n", a, b); //drukājam, ja 1. skaitlis ir mazāks par 2.
  }
  else if (a <= b) //pārbaudam, vai 1. skaitlis ir mazāks/vienāds ar 2. skaitli
  {
  printf("%d ir mazāks vai vienāds ar %d\n", a, b); //drukājam, ja 1. skaitlis ir mazāks vai vienāds ar 2.
  }
  return 0;

}
