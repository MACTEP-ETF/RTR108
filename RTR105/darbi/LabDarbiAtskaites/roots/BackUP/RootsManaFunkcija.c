/***************************************************************************************
Autors : Vladimirs Fedorovičs
Mērķis : Atrast sakni funkcijai 'cos(x)*cos(x)' pēc šādiem lietotāja ievadītiem datiem:
1.) x vērtību intervāla sākuma punkts 'a' un gala punkts 'b' [a;b].
2.) funkcijas vērtība 'c', kurai tiks atrasta/neatrasta x atbisltošā sakne.
3.) Funkcijas vērtību apgabals ir ierobežots [0;1] 
    (tiek secināts pēc 1. LabDarba GNUPLOT grafika)
*****************************************************************************************/

#include<stdio.h>
#include<math.h>
int main()
{
 float a, b, c, x, delta_x=1.e-5/*10 -5.pakāpē būs 0.0001*/, funkcA, funkcB;//, funkcX;
 int k=0; //cikla mainīgais
 char ch;

 printf("\nSveicināti!\n");
 printf("Šī programma atrod tādu 'x' vērtību no jūsu definētā intervāla [a;b],\n");
 printf("pie kura izpildas vienādojums: cos(x)*cos(x) = c, kur 'c' pieder pie intervāla [0;1]\n\n");

 printf("Lūdzu, ievadiet intervāla sākotnējo x vērtību, a = ");
 scanf("%f",&a);
 printf("Lūdzu, ievadiet intervāla gala x vērību, b = ");
 scanf("%f",&b);

 StartC:
 printf("Lūdzu, ievadiet funkcijas vērtību, c = ");
 scanf("%f",&c);
 if (c>1 | c<0)
 {
  printf("Funkcijas vērtība neatbilst funkcijas intervālam [0;1]!\n");
  goto StartC;
 }

 printf("cos(a) = %f \n", cos(a));
 printf("cos(b) = %f \n", cos(b));
 printf("cos(a)^2 = %f \n", cos(a)*cos(a));
 printf("cos(b)^2 = %f \n", cos(b)*cos(b));
 printf("cos(a)^2 ar pow = %f \n", pow(cos(a),2));
 printf("cos(b)^2 ar pow = %f \n", pow(cos(b),2));

 funkcA = pow(cos(a),2); funkcB = pow(cos(b),2); //funkcX = pow(cos(x),2);

Check:
 if((funkcA*funkcB)>0)
 {
  printf("Intervālā [%.2f;%.2f] cos(x)*cos(x) funkcijai ",a,b);
  printf("sakņu nav (vai tājā ir pāru sakņu skaits)\n");
  printf("Programma tiek apstādināta!\n\n");
  return 1;
 }

Next:
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
