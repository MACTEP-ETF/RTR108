#include<stdio.h>
#include<math.h>
int main()
{
 float a, b, c, x, delta_x=1.e-5/*10 -5.pakāpē būs 0.0001*/, funkcA, funkcB;//, funkcX;
 int k=0; //cikla mainīgais

 printf("Sveicināti!\n");
 printf("Šī programma atrod tādu 'x' vērtību no jūsu definētā intervāla [a;b],\n");
 printf("pie kuras izpildas vienādojums: cos(x)*cos(x) = c\n");
 StartA:
 printf("Lūdzu, ievadiet 'a' vērtību: ");
 scanf("%f",&a);
/*
  if (a == )
  {
   printf("Jūs neievadījāt skaitli");
   goto StartA;
  }
*/

 printf("\nLūdzu, ievadiet 'b' vērtību: ");
 scanf("%f",&b);

 printf("\nLūdzu, ievadiet 'c' vērtību: ");
 scanf("%f",&c);

 funkcA = pow(cos(a),2); funkcB = pow(cos(b),2); //funkcX = pow(cos(x),2);

 printf("a vērtība = %f\n",a);
 printf("b vērtība = %f\n",b);
 printf("c vērtība = %f\n",c);
 printf("cos(%7.4f)*cos(%7.4f)=%7.e\n",a,a,funkcA);
 printf("cos(%7.4f)*cos(%7.4f)=%7.e\n",b,b,funkcB);
 printf("funkcA*funkcB = %e\n",funkcA*funkcB);
/*
 if((funkcA*funkcB)>0)
 {
  printf("Intervālā [%.2f;%.2f] cos(x)*cos(x) funkcijai ",a,b);
  printf("sakņu nav (vai tājā ir pāru sakņu skaits)\n");
  return 1;
 }
*/

 printf("               cos(%7.3f)*cos(%7.3f)=%7.3f\t\t\t\t",a,a,cos(a)*cos(a));
 printf("cos(%7.4f)*cos(%7.4f)=%7.4f\n",b,b,cos(b)*cos(b));

 while((b-a)>delta_x)
 {
  k++;//k=k+1;//k+=1;
  x = (a+b)/2.; //'.' apzīmē, ka dalījums būs pilnais (respektīvi - matemātisks ar skaitļiem pēc komata, nevis tika veselās daļas aprēķins)
  if(funkcA*pow(cos(x),2)>0) // pie a=0 -> funkcA=0 -> reizinājums ir precīzi 0 visu laiku -> visu laika "strādā" b=x
   a = x;
  else
   b = x;

  printf("%2d. iterācija: cos(%7.4f)*cos(%7.4f)=%7.4f\t",k,a,a,pow(cos(a),2));
  printf("cos(%7.4f)*cos(%7.4f)=%7.3f\t",x,x,pow(cos(x),2));
  printf("cos(%7.4f)*cos(%7.4f)=%7.3f\n",b,b,pow(cos(b),2));
 }

 //Galarezultāts! Ar kādu 'x' vērtību izpildās vienādojums cos(x)*cos(x)=0
 printf("Sakne atrodas pie x=%.4f, jo cos(x)*cos(x) ir %.4f\n",x,pow(cos(x),2));

 return 0;
}
