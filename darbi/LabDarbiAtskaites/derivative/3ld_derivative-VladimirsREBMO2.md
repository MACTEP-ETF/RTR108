# 3. laboratorijas darba - Atvasinājumi (derivative) - atskaite

## Teorija
Funkcijas atvasinājums ir diferenciālā aprēķina jēdziens, kas raksturo funkcijas izmaiņu ātrumu noteiktā punktā. To definē kā funkcijas pieauguma attiecības pret tā argumenta pieaugumu robežu, kad argumentam ir tendence palielināt argumentu uz nulli, ja šāds ierobežojums pastāv. Funkciju, kurai ir ierobežots atvasinājums (kādā brīdī), sauc par diferencējamu (noteiktā brīdī). Atvasinājums ir viens no matemātiskās analīzes pamatjēdzieniem.  

### Kods
```
/*************************************************************************
Autors : Vladimirs Fedorovičs
Mērķis : Aprēķināt funkcijas 'cos(x)*cos(x)' tiešo vērtību,
kā arī tās 1. un 2. kārtas atvasinājumus pēc divām metodēm:
A.) Ar analitisko formulu (AF).
B.) Ar 'forward difference' metodi (FD).
Lietotājs pats ievada 'x' vērtības intervālu [a;b], 
kā arī nosaka 'delta_x' soli ar kuru šis intervāls tiks izskaitļots.
*************************************************************************/

#include<stdio.h>
#include<math.h>
double f(double z)
{
 return pow(cos(z),2);
}
void main()
{
 double a, b, x, delta_x; //kur 'a' un 'b' - intervāls [a;b], 'x' - mainīgais aprēķinam, 'delta_x' - solis
 double x0, Funx, FunD, FunD2, FunAtv1, FunAtv2; //'Forward difference' mainīgie

 FILE *Der; //pointers GNUPLOT grafika faila izveidei priekš zīmēšanas

 printf("\nSveicināti!\n");
 printf("Šī programma aprēķina funkcijas cos(x)*cos(x) tiešo vērtību,\n");
 printf("kā arī 1. un 2. kārtas atvasinājumus pēc divām metodēm:\n");
 printf("A.) Ar analitisko formulu (AF).\n");
 printf("B.) Ar 'forward difference' metodi (FD).\n");

 printf("Lūdzu, nosakiet x vērtības intervālu [a;b].\n");
 printf("a = "); scanf("%lf",&a);

 B:
 printf("b = "); scanf("%lf",&b);
 if (b<a)
 {
  printf("Beigu intervāla vērtība nevar būt mazāka par sākuma vērtību!\nLūdzu ievadiet vēlreiz!\n");
  goto B;
 }

 printf("\nKā arī, nosakiet ar kādu soli (delta_x) mēs šo intervālu izskatīsim.\n");

 Delta:
 printf("delta_x = "); scanf("%lf",&delta_x);
 if (delta_x>(b-a))
 {
  printf("delta_x nevar būt lielāks par intervālu!\nLūdzu ievadiet vēlreiz!\n");
  goto Delta;
 }

 Der = fopen ("derivative.dat","a"); //izveidojam un atveram failu priekš GNUPLOT grafika zīmēšanas

 //Aprakstam stabiņu nosaukumus
 printf("      x\t\t    f(x)\t    f\'(x)\t    f\'(x)\t    f\'\'(x)\t    f\'\'(x)\n");
 printf("       \t\t    \t\t    ar AF\t    ar FD\t    ar AF\t    ar FD\n");

 //ierakstīsim TITLE katram stabiņam iekš DAT faila
 fprintf(Der,"#     x\t\t    f(x)\t    f\'(x)\t    f\'(x)\t    f\'\'(x)\t    f\'\'(x)\n");
 fprintf(Der,"#      \t\t    \t\t    ar AF\t    ar FD\t    ar AF\t    ar FD\n");

 x = x0 = a;
 while(x<b+delta_x)
 {
  Funx = f(x0);
  FunD = f(x0 + delta_x);
  FunAtv1 = (FunD - Funx)/delta_x;
  FunD2 = f(x0 - delta_x);
  FunAtv2 = (FunD - (2 * Funx) + FunD2)/pow(delta_x,2) + 0 * pow(delta_x,2); // Formula: y''(x)=(y(x+h)-2*y(x)+y(x-h))/h^2+0*(h^2)
  printf("%10.4f\t%10.4f  \t%10.4f\t%10.4f  \t%10.4f\t%10.4f  \n",x,pow(cos(x),2),-sin(2*x),FunAtv1,-2*cos(2*x),FunAtv2);

  //ierakstam katru soli failā
  fprintf(Der,"%10.4f\t%10.4f  \t%10.4f\t%10.4f  \t%10.4f\t%10.4f  \n",x,pow(cos(x),2),-sin(2*x),FunAtv1,-2*cos(2*x),FunAtv2);

  x += delta_x;
  x0 += delta_x;
 }
 fclose(Der); //aizveram failu 'derivative.dat'
}

/*
Aprēķināsim f'(x) izmantojot analitisko formulu (augstākā matemātika):
(cos(x)*cos(x))' = 2 * cos(x) * (-sin(x)) = -sin(2*x)
Aprēķināsim f''(x) izmantojot analitisko formulu (augstākā matemātika):
(cos(x)*cos(x))'' = (-sin(2*x))' = -1 * cos(2*x) * 2 = -2*cos(2*x)
*/

```
- Programmas beigās es aprakstīju atvasināšanu pēc analitiskās formulas komentāra veidā.

### Rezultāts
Rezultāts ir gana apjomīgs, tādēļ ieliku tikai daļu no viņa. Ja nepieciešams, pašu programmu var droši notestēt - viss strādā korekti.
```
Sveicināti!
Šī programma aprēķina funkcijas cos(x)*cos(x) tiešo vērtību,
kā arī 1. un 2. kārtas atvasinājumus pēc divām metodēm:
A.) Ar analitisko formulu (AF).
B.) Ar 'forward difference' metodi (FD).
Lūdzu, nosakiet x vērtības intervālu [a;b].
a = -3.2
b = 0.5

Kā arī, nosakiet ar kādu soli (delta_x) mēs šo intervālu izskatīsim.
delta_x = 0.0001
      x		    f(x)	    f'(x)	    f'(x)	    f''(x)	    f''(x)
       		    		    ar AF	    ar FD	    ar AF	    ar FD
   -3.2000	    0.9966  	    0.1165	    0.1164  	   -1.9864	   -1.9864  
   -3.1999	    0.9966  	    0.1164	    0.1163  	   -1.9864	   -1.9864  
   -3.1998	    0.9966  	    0.1162	    0.1161  	   -1.9865	   -1.9865  
   -3.1997	    0.9966  	    0.1160	    0.1159  	   -1.9865	   -1.9865  
   -3.1996	    0.9966  	    0.1158	    0.1157  	   -1.9866	   -1.9866  
   -3.1995	    0.9967  	    0.1156	    0.1155  	   -1.9866	   -1.9866  
   -3.1994	    0.9967  	    0.1154	    0.1153  	   -1.9866	   -1.9866  
   -3.1993	    0.9967  	    0.1152	    0.1151  	   -1.9867	   -1.9867  
   -3.1992	    0.9967  	    0.1150	    0.1149  	   -1.9867	   -1.9867  
   -3.1991	    0.9967  	    0.1148	    0.1147  	   -1.9868	   -1.9868  
   -3.1990	    0.9967  	    0.1146	    0.1145  	   -1.9868	   -1.9868  
   -3.1989	    0.9967  	    0.1144	    0.1143  	   -1.9869	   -1.9869  
   -3.1988	    0.9967  	    0.1142	    0.1141  	   -1.9869	   -1.9869  
   -3.1987	    0.9967  	    0.1140	    0.1139  	   -1.9870	   -1.9870  
   -3.1986	    0.9968  	    0.1138	    0.1137  	   -1.9870	   -1.9870  
   -3.1985	    0.9968  	    0.1136	    0.1135  	   -1.9871	   -1.9871  
   -3.1984	    0.9968  	    0.1134	    0.1133  	   -1.9871	   -1.9871  
   -3.1983	    0.9968  	    0.1132	    0.1131  	   -1.9872	   -1.9872  
   -3.1982	    0.9968  	    0.1130	    0.1129  	   -1.9872	   -1.9872  
   -3.1981	    0.9968  	    0.1128	    0.1127  	   -1.9872	   -1.9872  
   -3.1980	    0.9968  	    0.1126	    0.1125  	   -1.9873	   -1.9873  
   -3.1979	    0.9968  	    0.1124	    0.1123  	   -1.9873	   -1.9873  
   -3.1978	    0.9968  	    0.1122	    0.1121  	   -1.9874	   -1.9874  
   -3.1977	    0.9969  	    0.1120	    0.1119  	   -1.9874	   -1.9874  
   -3.1976	    0.9969  	    0.1118	    0.1117  	   -1.9875	   -1.9875  
   -3.1975	    0.9969  	    0.1116	    0.1115  	   -1.9875	   -1.9875  
   -3.1974	    0.9969  	    0.1114	    0.1113  	   -1.9876	   -1.9876  
   -3.1973	    0.9969  	    0.1112	    0.1111  	   -1.9876	   -1.9876  
   -3.1972	    0.9969  	    0.1110	    0.1109  	   -1.9876	   -1.9876  
   -3.1971	    0.9969  	    0.1108	    0.1107  	   -1.9877	   -1.9877  
   -3.1970	    0.9969  	    0.1106	    0.1105  	   -1.9877	   -1.9877  
   -3.1969	    0.9969  	    0.1104	    0.1103  	   -1.9878	   -1.9878  
   -3.1968	    0.9970  	    0.1102	    0.1101  	   -1.9878	   -1.9878  
   -3.1967	    0.9970  	    0.1100	    0.1099  	   -1.9879	   -1.9879  
   -3.1966	    0.9970  	    0.1098	    0.1097  	   -1.9879	   -1.9879  
   -3.1965	    0.9970  	    0.1096	    0.1095  	   -1.9880	   -1.9880  
   -3.1964	    0.9970  	    0.1094	    0.1093  	   -1.9880	   -1.9880  
   -3.1963	    0.9970  	    0.1092	    0.1091  	   -1.9880	   -1.9880  
   -3.1962	    0.9970  	    0.1090	    0.1089  	   -1.9881	   -1.9881  
   -3.1961	    0.9970  	    0.1088	    0.1087  	   -1.9881	   -1.9881  
   -3.1960	    0.9970  	    0.1086	    0.1085  	   -1.9882	   -1.9882  
   -3.1959	    0.9971  	    0.1084	    0.1083  	   -1.9882	   -1.9882  
   -3.1958	    0.9971  	    0.1082	    0.1081  	   -1.9883	   -1.9883  
   -3.1957	    0.9971  	    0.1080	    0.1079  	   -1.9883	   -1.9883  
   -3.1956	    0.9971  	    0.1078	    0.1077  	   -1.9883	   -1.9883  
   -3.1955	    0.9971  	    0.1076	    0.1075  	   -1.9884	   -1.9884  
   -3.1954	    0.9971  	    0.1074	    0.1073  	   -1.9884	   -1.9884  
   -3.1953	    0.9971  	    0.1072	    0.1071  	   -1.9885	   -1.9885  
   -3.1952	    0.9971  	    0.1070	    0.1069  	   -1.9885	   -1.9885  
   -3.1951	    0.9971  	    0.1068	    0.1067  	   -1.9886	   -1.9886  
   -3.1950	    0.9972  	    0.1066	    0.1065  	   -1.9886	   -1.9886  
   -3.1949	    0.9972  	    0.1064	    0.1063  	   -1.9886	   -1.9886  
   -3.1948	    0.9972  	    0.1062	    0.1061  	   -1.9887	   -1.9887  
   -3.1947	    0.9972  	    0.1060	    0.1059  	   -1.9887	   -1.9887  
   -3.1946	    0.9972  	    0.1058	    0.1057  	   -1.9888	   -1.9888  
   -3.1945	    0.9972  	    0.1056	    0.1055  	   -1.9888	   -1.9888  
   -3.1944	    0.9972  	    0.1054	    0.1053  	   -1.9889	   -1.9889  
   -3.1943	    0.9972  	    0.1052	    0.1051  	   -1.9889	   -1.9889  
   -3.1942	    0.9972  	    0.1050	    0.1049  	   -1.9889	   -1.9889  
   -3.1941	    0.9972  	    0.1048	    0.1047  	   -1.9890	   -1.9890  
   -3.1940	    0.9973  	    0.1046	    0.1045  	   -1.9890	   -1.9890  
   -3.1939	    0.9973  	    0.1044	    0.1043  	   -1.9891	   -1.9891  
   -3.1938	    0.9973  	    0.1042	    0.1041  	   -1.9891	   -1.9891  
   -3.1937	    0.9973  	    0.1040	    0.1039  	   -1.9891	   -1.9891  
   -3.1936	    0.9973  	    0.1038	    0.1037  	   -1.9892	   -1.9892  
   -3.1935	    0.9973  	    0.1036	    0.1035  	   -1.9892	   -1.9892  
   -3.1934	    0.9973  	    0.1034	    0.1033  	   -1.9893	   -1.9893  
   -3.1933	    0.9973  	    0.1032	    0.1031  	   -1.9893	   -1.9893  
   -3.1932	    0.9973  	    0.1030	    0.1029  	   -1.9894	   -1.9894  
   -3.1931	    0.9973  	    0.1028	    0.1027  	   -1.9894	   -1.9894  
   -3.1930	    0.9974  	    0.1026	    0.1025  	   -1.9894	   -1.9894  
   -3.1929	    0.9974  	    0.1024	    0.1023  	   -1.9895	   -1.9895  
   -3.1928	    0.9974  	    0.1022	    0.1021  	   -1.9895	   -1.9895  
   -3.1927	    0.9974  	    0.1020	    0.1019  	   -1.9896	   -1.9896  
   -3.1926	    0.9974  	    0.1018	    0.1017  	   -1.9896	   -1.9896  
   -3.1925	    0.9974  	    0.1016	    0.1015  	   -1.9896	   -1.9896  
   -3.1924	    0.9974  	    0.1014	    0.1013  	   -1.9897	   -1.9897  
   -3.1923	    0.9974  	    0.1012	    0.1011  	   -1.9897	   -1.9897  
   -3.1922	    0.9974  	    0.1010	    0.1009  	   -1.9898	   -1.9898  
   -3.1921	    0.9975  	    0.1008	    0.1007  	   -1.9898	   -1.9898  
   -3.1920	    0.9975  	    0.1006	    0.1005  	   -1.9898	   -1.9898  
   -3.1919	    0.9975  	    0.1004	    0.1003  	   -1.9899	   -1.9899  
   -3.1918	    0.9975  	    0.1002	    0.1001  	   -1.9899	   -1.9899  
   -3.1917	    0.9975  	    0.1000	    0.0999  	   -1.9900	   -1.9900  
   -3.1916	    0.9975  	    0.0998	    0.0997  	   -1.9900	   -1.9900  
   -3.1915	    0.9975  	    0.0996	    0.0995  	   -1.9900	   -1.9900  
   -3.1914	    0.9975  	    0.0995	    0.0994  	   -1.9901	   -1.9901  
   -3.1913	    0.9975  	    0.0993	    0.0992  	   -1.9901	   -1.9901  
   -3.1912	    0.9975  	    0.0991	    0.0990  	   -1.9902	   -1.9902  
   -3.1911	    0.9976  	    0.0989	    0.0988  	   -1.9902	   -1.9902  
   -3.1910	    0.9976  	    0.0987	    0.0986  	   -1.9902	   -1.9902  
   -3.1909	    0.9976  	    0.0985	    0.0984  	   -1.9903	   -1.9903  
   -3.1908	    0.9976  	    0.0983	    0.0982  	   -1.9903	   -1.9903  
   -3.1907	    0.9976  	    0.0981	    0.0980  	   -1.9904	   -1.9904  
   -3.1906	    0.9976  	    0.0979	    0.0978  	   -1.9904	   -1.9904  
   -3.1905	    0.9976  	    0.0977	    0.0976  	   -1.9904	   -1.9904  
   -3.1904	    0.9976  	    0.0975	    0.0974  	   -1.9905	   -1.9905  
   -3.1903	    0.9976  	    0.0973	    0.0972  	   -1.9905	   -1.9905  
   -3.1902	    0.9976  	    0.0971	    0.0970  	   -1.9906	   -1.9906  
   -3.1901	    0.9976  	    0.0969	    0.0968  	   -1.9906	   -1.9906  
   -3.1900	    0.9977  	    0.0967	    0.0966  	   -1.9906	   -1.9906  

```

### Analīze
Lai korekti aprēķinātu pēc *forward difference* metodes, biju spiest likt gana mazu delta_x vērtību, pretējā gadījumā rezultāts nebija tik perfekts kā iebūvētās cos(x) funkcijas aprēķins (<math.h>) (Skat. otro rezultātu).
2. kārtas atvasinājuma formulu es atradu [šeit](http://www.machinelearning.ru/wiki/index.php?title=%D0%92%D1%8B%D1%87%D0%B8%D1%81%D0%BB%D0%B5%D0%BD%D0%B8%D0%B5_%D0%B2%D1%82%D0%BE%D1%80%D0%BE%D0%B9_%D0%BF%D1%80%D0%BE%D0%B8%D0%B7%D0%B2%D0%BE%D0%B4%D0%BD%D0%BE%D0%B9_%D0%BF%D0%BE_%D0%BE%D0%B4%D0%BD%D0%BE%D0%B9_%D0%BF%D0%B5%D1%80%D0%B5%D0%BC%D0%B5%D0%BD%D0%BD%D0%BE%D0%B9), kura arī atbilst 2. kārtas atvasinājumam: d<sup>2</sup>y/dx<sup>2</sup>

### Rezultāts Nr2
Šeit delta_x = 0.1, dēļ tā arī acīmredzama nesakritība starp AF un FD.

```
Sveicināti!
Šī programma aprēķina funkcijas cos(x)*cos(x) tiešo vērtību,
kā arī 1. un 2. kārtas atvasinājumus pēc divām metodēm:
A.) Ar analitisko formulu (AF).
B.) Ar 'forward difference' metodi (FD).
Lūdzu, nosakiet x vērtības intervālu [a;b].
a = -2
b = 1.9

Kā arī, nosakiet ar kādu soli (delta_x) mēs šo intervālu izskatīsim.
delta_x = 0.1
      x		    f(x)	    f'(x)	    f'(x)	    f''(x)	    f''(x)
       		    		    ar AF	    ar FD	    ar AF	    ar FD
   -2.0000	    0.1732  	   -0.7568	   -0.6866  	    1.3073	    1.3029  
   -1.9000	    0.1045  	   -0.6119	   -0.5290  	    1.5819	    1.5767  
   -1.8000	    0.0516  	   -0.4425	   -0.3502  	    1.7935	    1.7875  
   -1.7000	    0.0166  	   -0.2555	   -0.1575  	    1.9336	    1.9272  
   -1.6000	    0.0009  	   -0.0584	    0.0415  	    1.9966	    1.9899  
   -1.5000	    0.0050  	    0.1411	    0.2389  	    1.9800	    1.9734  
   -1.4000	    0.0289  	    0.3350	    0.4267  	    1.8844	    1.8782  
   -1.3000	    0.0716  	    0.5155	    0.5975  	    1.7138	    1.7081  
   -1.2000	    0.1313  	    0.6755	    0.7445  	    1.4748	    1.4699  
   -1.1000	    0.2057  	    0.8085	    0.8618  	    1.1770	    1.1731  
   -1.0000	    0.2919  	    0.9093	    0.9447  	    0.8323	    0.8295  
   -0.9000	    0.3864  	    0.9738	    0.9900  	    0.4544	    0.4529  
   -0.8000	    0.4854  	    0.9996	    0.9958  	    0.0584	    0.0582  
   -0.7000	    0.5850  	    0.9854	    0.9620  	   -0.3399	   -0.3388  
   -0.6000	    0.6812  	    0.9320	    0.8897  	   -0.7247	   -0.7223  
   -0.5000	    0.7702  	    0.8415	    0.7820  	   -1.0806	   -1.0770  
   -0.4000	    0.8484  	    0.7174	    0.6431  	   -1.3934	   -1.3888  
   -0.3000	    0.9127  	    0.5646	    0.4786  	   -1.6507	   -1.6452  
   -0.2000	    0.9605  	    0.3894	    0.2950  	   -1.8421	   -1.8360  
   -0.1000	    0.9900  	    0.1987	    0.0997  	   -1.9601	   -1.9536  
    0.0000	    1.0000  	   -0.0000	   -0.0997  	   -2.0000	   -1.9933  
    0.1000	    0.9900  	   -0.1987	   -0.2950  	   -1.9601	   -1.9536  
    0.2000	    0.9605  	   -0.3894	   -0.4786  	   -1.8421	   -1.8360  
    0.3000	    0.9127  	   -0.5646	   -0.6431  	   -1.6507	   -1.6452  
    0.4000	    0.8484  	   -0.7174	   -0.7820  	   -1.3934	   -1.3888  
    0.5000	    0.7702  	   -0.8415	   -0.8897  	   -1.0806	   -1.0770  
    0.6000	    0.6812  	   -0.9320	   -0.9620  	   -0.7247	   -0.7223  
    0.7000	    0.5850  	   -0.9854	   -0.9958  	   -0.3399	   -0.3388  
    0.8000	    0.4854  	   -0.9996	   -0.9900  	    0.0584	    0.0582  
    0.9000	    0.3864  	   -0.9738	   -0.9447  	    0.4544	    0.4529  
    1.0000	    0.2919  	   -0.9093	   -0.8618  	    0.8323	    0.8295  
    1.1000	    0.2057  	   -0.8085	   -0.7445  	    1.1770	    1.1731  
    1.2000	    0.1313  	   -0.6755	   -0.5975  	    1.4748	    1.4699  
    1.3000	    0.0716  	   -0.5155	   -0.4267  	    1.7138	    1.7081  
    1.4000	    0.0289  	   -0.3350	   -0.2389  	    1.8844	    1.8782  
    1.5000	    0.0050  	   -0.1411	   -0.0415  	    1.9800	    1.9734  
    1.6000	    0.0009  	    0.0584	    0.1575  	    1.9966	    1.9899  
    1.7000	    0.0166  	    0.2555	    0.3502  	    1.9336	    1.9272  
    1.8000	    0.0516  	    0.4425	    0.5290  	    1.7935	    1.7875  
    1.9000	    0.1045  	    0.6119	    0.6866  	    1.5819	    1.5767  

```

### Secinājums
Tikai darot var gūt panākumus :) 

### Funkcijas y=cos(x)\*cos(x) grafiki  
#### Funkcijas grafiks, x intervāls: \[-3.2;0.5\]  
![DerivativeGnuplot](https://github.com/MACTEP-ETF/RTR105/blob/master/darbi/LabDarbiAtskaites/derivative/DerivativeGnuplot.png)

#### Funkcijas cos(x)\*cos(x) grafiks no 1. LabDarba 
![Funkcijas grafiks](https://github.com/MACTEP-ETF/RTR105/blob/master/darbi/LabDarbiAtskaites/series/GnuplotSeries/Funkcijas%20grafiks.png)

P.S. Funkcijas vērtību skaitļošanas kods grafika attēlošanai GNUPLOT vidē ir iešūts pašā programmā, tādēļ atsevišķi netika rakstīts :)
