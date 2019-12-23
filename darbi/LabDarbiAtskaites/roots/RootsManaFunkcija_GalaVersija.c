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
double f(double z)
 {return cos(z);} /*aprēķinam mūsu funkciju sākumā BEZ kvadrāta, pretējā gadījumā mēs nespēsim atrast saknes pēc dihatomijas metodes!*/

int main()
{
 float a, b, c, x, delta_x=1.e-5/*10 -5.pakāpē būs 0.0001*/, funkcA, funkcB;
 int k=0; //cikla mainīgais
 unsigned char restart;

 printf("\nSveicināti!\n");
 printf("Šī programma atrod tādu 'x' vērtību no jūsu definētā intervāla [a;b],\n");
 printf("pie kura izpildas vienādojums: cos(x)*cos(x) = c, kur 'c' pieder pie intervāla [0;1]\n\n");

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

 StartC:
 printf("Lūdzu, ievadiet funkcijas vērtību, c = ");
 scanf("%f",&c);
 if (c>1 | c<0)
 {
  printf("Funkcijas vērtība neatbilst funkcijas intervālam [0;1]!\n");
  goto StartC;
 }

 printf("cos(a) = %f \n", f(a));
 printf("cos(b) = %f \n", f(b));
 printf("kvadrātsakne no c = %f \n", sqrt(c));

/* Beidot tikām līdz aprēķinam*/

 funkcA = f(a); funkcB = f(b);

Check:
 if((funkcA*funkcB)>0 | (pow(funkcA,2)<c & pow(funkcB,2)<c))
 {
  printf("Intervālā [%.2f;%.2f] cos(x)*cos(x) funkcijai ",a,b);
  printf("sakņu nav (vai tājā ir pāru sakņu skaits)\n");
  printf("Sākt no sākuma?(j/n)\n\n");
  scanf("%c",&restart);
  while (restart != 0xA6) /* jāsačiņī, lai korekti strādā!!!*/
  return 1;
 }

Next:
 printf("cos^2(%7.3f)=%7.3f\t\t\t\t",a,pow(f(a),2));
 printf("cos^2(%7.4f)=%7.4f\n",b,pow(f(b),2));

 while((b-a)>delta_x)
 {
  k++;//k=k+1;//k+=1;
  x = (a+b)/2.; //'.' apzīmē, ka dalījums būs pilnais (respektīvi - matemātisks ar skaitļiem pēc komata, nevis tika veselās daļas aprēķins)
  funkcB = f(x);
  if(funkcA*funkcB<=sqrt(c)) // tuvojamies mūsu f(x)=c rezultātam
   b = x;
  else
   a = x;

  printf("%2d. iterācija: cos^2(%7.4f)=%7.4f\t",k,a,pow(f(a),2));
  printf("cos^2(%7.4f)=%7.3f\t",x,pow(f(x),2));
  printf("c = %f\t",c);
  printf("cos^2(%7.4f)=%7.3f\n",b,pow(f(b),2));
 }

 //Galarezultāts! Ar kādu 'x' vērtību izpildās vienādojums cos(x)*cos(x)=0

 printf("\n%f\n",x);
 printf("\n\nSakne atrodas pie x=+-%.4f, jo cos^2(x) = %.4f\n",fabs(x),pow(f(x),2));

 return 0;
}
