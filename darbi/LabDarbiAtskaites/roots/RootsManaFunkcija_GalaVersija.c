/***************************************************************************************
Autors : Vladimirs Fedorovičs
Mērķis : Atrast sakni funkcijai 'cos(x)*cos(x)=c' pēc šādiem lietotāja ievadītiem datiem:
1.) x vērtību intervāla sākuma punkts 'a' un gala punkts 'b' [a;b].
2.) funkcijas vērtība 'c'.
3.) Funkcijas vērtību apgabals ir ierobežots [0;1] 
    (tiek secināts pēc 1. LabDarba GNUPLOT grafika)

P.S. Teorijā, kvadrātiskai funkcijai ir divas saknes, bet tā kā Dihotomijas metode 
meklē tikai vienu vienīgo sakni, tad programma atrod tikai vienu vienīgo x vērtību
*****************************************************************************************/

#include<stdio.h>
#include<math.h>
double f(double z)
 {return cos(z);} 
/*aprēķinam mūsu funkciju sākumā BEZ kvadrāta, pretējā gadījumā mēs nespēsim atrast saknes pēc dihatomijas metodes!*/

int main()
{
 float a, b, c, D, x, delta_x, funkcA, funkcB, funkcX;
 int k=0; //cikla mainīgais

 printf("\nSveicināti!\n");
 printf("Šī programma atrod tādu 'x' vērtību no jūsu definētā intervāla [a;b],\n");
 printf("pie kura izpildas vienādojums: cos(x)*cos(x) = c, kur 'c' pieder pie intervāla [0;1],\n");
 printf("no kura Jūs izvēlēsieties sev tīkamu\n\n");
 printf("Turklāt, Jums būs jāievada arī precizitātes vērtība delta_x\n");

 StartA:
 printf("Lūdzu, ievadiet intervāla sākotnējo x vērtību, a = ");
 scanf("%f",&a);
 printf("Lūdzu, ievadiet intervāla gala x vērību, b = ");
 scanf("%f",&b);
 if (b<a)
 {
  printf("Intervāla gala vērtība nevar būt mazāka par sākotnējo!\n");
  printf(" Lūdzu, ievadiet atkārtoti visu intervālu!\n");
  goto StartA;
 }

 StartC:
 printf("Lūdzu, ievadiet funkcijas vērtību, c = ");
 scanf("%f",&c);
 if (c>1 | c<0)
 {
  printf("Funkcijas vērtība neatbilst funkcijas intervālam [0;1]!\n");
  goto StartC;
 }

 printf("Lūdzu, ievadiet precizitātes slieksni, delta_x = ");
 scanf("%f",&delta_x);

/*Aprēķina sākums*/
 D = sqrt(c);
 funkcA = f(a)-D;
 funkcB = f(b)-D;

 if((funkcA)*(funkcB)>0.0)
 {
  printf("Intervālā [%.2f;%.2f] cos(x)*cos(x)=c funkcijai ",a,b);
  printf("sakņu nav (vai tājā ir pāra sakņu skaits)!\n");
  printf("Lūdzu, sāciet no sākuma!\n\n\n");
  goto StartA;
 }
 else
  printf("\nDotajā intervālā sakne(s) ir!\n\n");

 while(fabs(b-a)>delta_x)
 {
  k++;//k=k+1;//k+=1;
  x = (a+b)/2.;
  funkcX = f(x)-D;
  if((funkcA)*(funkcX)<0.) // tuvojamies mūsu f(x)=c rezultātam
   b = x;
  else
   a = x;

//printf("\n%2d. iterācija: Acos(%7.4f)-D=%7.4f\t",k,a,f(a)-D);
//printf("Xcos(%7.4f)-D=%7.3f\t",x,f(x)-D);
//printf("Bcos(%7.4f)-D=%7.3f\n",b,f(b)-D);

 }
 printf("1.) Sakne atrodas pie x = %.4f, jo cos^2(x) = %f,\n",x,pow(f(x),2));
 printf("    un šī vērtība ir maksimāli pietuvināta Jūsu ievadītai funkcijas vērtībai C = %f\n",c);
 printf("2.) Iterāciju skaits ir vienāds ar %d\n\n",k);
 return 0;
}