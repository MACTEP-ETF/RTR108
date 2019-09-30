#include<stdio.h>

int main()
{
 int D = 128; //char pozitīvās skaitļu kopa ir līdz 127! 128 iet pāri, tātad, 128 tiek aizvietots ar "-1" - tas ir nākamais skaitlis. Tādēļ rakstam "int"
 float L = D * 3.14;
 printf("garums %.2f\n", L);
}
