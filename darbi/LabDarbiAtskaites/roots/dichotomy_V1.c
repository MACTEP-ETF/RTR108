#include<stdio.h>
#include<math.h>
int main(){
 float a=0.01, b=1.5*M_PI, x, delta_x=1.e-5/*10 -5.pakāpē būs 0.0001*/, funkcA, funkcB, funkcX;
 int k=0; //cikla literālis
 funkcA = sin(a); funkcB = sin(b);

 if((funkcA*funkcB)>0)
 {
  printf("Intervālā [%.2f;%.2f] sin(x) funkcijai ",a,b);
  printf("sakņu nav (vai tājā ir pāru sakņu skaits)\n");
  return 1;
 }

 printf("               sin(%7.3f )=%7.3f\t\t\t\t",a,sin(a));
 printf("sin(%7.4f )=%7.4f\n",b,sin(b));

 while((b-a)>delta_x)
 {
  k++;//k=k+1;//k+=1;
  x = (a+b)/2.; //'.' apzīmē, ka dalījums būs pilnais (respektīvi - matemātisks ar skaitļiem pēc komata, nevis tika veselās daļas aprēķins)
  if(funkcA*sin(x)>0) // pie a=0 -> funkca=0 -> reizinājums ir precīzi 0 visu laiku -> visu laika "strādā" b=x
   a = x;
  else
   b = x;

  printf("%2d. iterācija: sin(%7.4f)=%7.4f\t",k,a,sin(a));
  printf("sin(%7.4f )=%7.3f\t",x,sin(x));
  printf("sin(%7.4f )=%7.3f\n",b,sin(b));}

 printf("Sakne atrodas pie x=%.4f, jo sin(x) ir %.4f\n",x,sin(x));

 return 0;
}
