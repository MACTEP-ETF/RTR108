#include<stdio.h>

int main ()
{
 int size = 9;
 float a[9]={0.1419, 0.1565, 0.1048, 0.0581, 0.1355, 0.1306, 0.0887, 0.0839, 0.1000}, sum = 0;
 float max = a[0], min = a[0], vid, Temp, mediana = 0;
 int i, j, maxR, minR;

 for (i=0; i<size; i++)
 {
  sum += a[i];
  if (a[i] > max)
  {
   max = a[i];
   maxR = i;
  }

  if (a[i] < min)
  {
   min = a[i];
   minR = i;
  } 
 }

 for (i=0; i<size; i++) //kārtojam elementus augošā secībā
 {
  for (j=0; j<(size-1); j++)
  {
   if (a[j] > a[j+1])
   {
    Temp = a[j];
    a[j] = a[j+1];
    a[j+1] = Temp;
   }
  }
 }
 vid = sum/size;

 if (size%2 == 0) // ja elementu skaits ir pāra
  mediana = (a[(size-1)/2] + a[size/2])/2.0;
 else // ja elementu skaits ir nepāra
  mediana = a[size/2];

 printf("Summa = %f\n", sum);
 printf("Vislielākā iespēja realizēties %d notikumam\n",maxR);
 printf("Vismazākā iespēja realizēties %d notikumam\n",minR);
 printf("Dotās kopas vidējā vērtība = %.3f\n",vid);
 printf("Dotās kopas mediānas vērtība = %.3f\n",mediana);
 return 0;
}
