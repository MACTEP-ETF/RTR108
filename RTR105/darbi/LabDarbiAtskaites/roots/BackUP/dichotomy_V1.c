#include<stdio.h>
#include<math.h>

double f(double z)
 {return cos(z);} /*aprēķinam mūsu funkciju sākumā BEZ kvadrāta, pretējā gadījumā mēs nespēsim atrast saknes pēc dihatomijas metodes!*/

int main(){
 float a, b, x, delta_x=1.e-5/*10 -5.pakāpē būs 0.0001*/, funkcA, funkcB, funkcX;
 int k=0; //cikla literālis

 StarA:
 printf("Lūdzu, ievadiet intervāla sākotnējo x vērtību, a = ");
 scanf("%f",&a);
 printf("Lūdzu, ievadiet intervāla gala x vērību, b = ");
 scanf("%f",&b);
 if (b<a)
 {
  printf("Intervāla gala vērtība nevar būt mazāka par sākotnējo!\n");
  printf(" Lūdzu, ievadiet atkārtoti visu intervālu!\n");
  goto StarA;
 }
 b = b*M_PI;

 printf("cos(a) = %f \n", f(a));
 printf("cos(b) = %f \n", f(b));



 funkcA = cos(a); funkcB = cos(b);

 if((funkcA*funkcB)>0.5)
 {
  printf("Intervālā [%.2f;%.2f] cos^2(x) funkcijai ",a,b);
  printf("sakņu nav (vai tājā ir pāru sakņu skaits)\n");
  return 1;
 }

 printf("               cos(%7.3f )=%7.3f\t\t\t\t",a,cos(a));
 printf("cos(%7.4f )=%7.4f\n",b,cos(b));

 while((b-a)>delta_x)
 {
  k++;//k=k+1;//k+=1;
  x = (a+b)/2.; //'.' apzīmē, ka dalījums būs pilnais (respektīvi - matemātisks ar skaitļiem pēc komata, nevis tika veselās daļas aprēķins)
  if(funkcA*cos(x)>0.5) // pie a=0 -> funkca=0 -> reizinājums ir precīzi 0 visu laiku -> visu laika "strādā" b=x
   a = x;
  else
   b = x;

  printf("%2d. iterācija: cos(%7.4f)=%7.4f\t",k,a,cos(a));
  printf("cos(%7.4f )=%7.3f\t",x,cos(x));
  printf("cos(%7.4f )=%7.3f\n",b,cos(b));}

 printf("Sakne atrodas pie x=%.4f, jo cos(x) ir %.4f\n",x,cos(x));

 return 0;
}
