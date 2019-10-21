#include<stdio.h>
void main()
 {
 int number;

 printf("Cienījamais lietotāj, lūdzu, ievadi skaitli: ");
 scanf("%d",&number);
 //if((number%2)=0) //viena vienādības zīme - tā ir piešķiršanas operācija!
 if ((number%2)==0)
  printf("Tavs skaitlis %d ir pāru skaitlis\n",number);
 else
  printf("Tavs skaitlis %d ir nepāru skaitlis\n",number);

 int remainder=number%2;
 //if (remainder=0)//vērtības piešķiršanu mainīgajam vienmēr var izpildīt
 //tāpēc pēc būtības te ir rakstīts if(1) - un atbilde vienmēr būs "nepāru"
 if (remainder==0)
  printf("Tavs skaitlis %d ir pāru skaitlis\n",number);
 else
  printf("Tavs skaitlis %d ir nepāru skaitlis\n",number);
 }

