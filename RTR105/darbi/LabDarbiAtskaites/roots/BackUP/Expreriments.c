#include<stdio.h>
#include<math.h>
double f(double z)
 {return sin(z);} /*aprēķinam mūsu funkciju sākumā BEZ kvadrāta, pretējā gadījumā mēs nespēsim atrast saknes pēc dihatomijas metodes!*/

int main(){
 float a=0.01, b=1.5*M_PI, x, delta_x=1.e-5/*0.001*/, funkca, funkcb, funkcx;
 int k=0;
 funkca = sin(a); funkcb = sin(b);
 if(funkca*funkcb<-0.5){
  printf("Intervālā [%.2f;%.2f] sin(x) funkcijai ",a,b);
  printf("sakņu nav (vai tājā ir pāru sakņu skaits)\n");
  return 1;}

 printf("sin(a) = %f \n", f(a));
 printf("sin(b) = %f \n", f(b));


 printf("               sin(%7.3f)=%7.3f\t\t\t\t",a,sin(a));
 printf("sin(%7.3f)=%7.3f\n",b,sin(b));

 while((b-a)>delta_x){
  k++;//k=k+1;//k+=1;
  x = (a+b)/2.;
  if(funkca*sin(x)<-0.5) // pie a=0 -> funkca=0 -> reizinājums ir precīzi 0 visu laiku -> visu laika "strādā" b=x
   a = x;
  else
   b = x;
  printf("%2d. iterācija: sin(%7.3f)=%7.3f\t",k,a,sin(a));
  printf("sin(%7.3f)=%7.3f\t",x,sin(x));
  printf("sin(%7.3f)=%7.3f\n",b,sin(b));}

 printf("Sākne atrodas pie x=%.3f, jo sin(x) ir %.3f\n",x,sin(x));

 return 0;
}
