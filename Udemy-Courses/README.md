# udemy
Beginners first step to Coding world (C language)

## Data Types
- **unsigned char** – 0–255  
- **char** – from -128 to 127  
- **unsigned int**  
- **int**  
- **long**  
- **float**  
- **double**  
- **long double**  

## Operators
- **c=a+b; c=a\*b; c=a/b;**:
  - **a, b** – operands;  
  - **+, \*, /** – operator;  
  
## 4 jump statements
- **break** – exit from current statement to the next nested statement (if exist) or go to end of statement.  
- **continue** – skip remain statement codes and go to beginning of a statement!  
- **goto** – just for skip some statements and continue at label *end:*
- **return** – pēc funkcijas izpildīšanas atgriež vērtību.  

## Arrays
**1.** Arrays are collection of similar data types.  
**2.** Array index starts from zero.  
**3.** Array size needs to be mentioned while declaring.  
**4.** Array variable size=data type size * array size.  
**5.** Arrays require sequential memory.  

### CharArrays
- **for (i=0; name[i]!='\0'; i++)** – \0 nozīmē, ka cikls darbosies līdz rindas nobeiguma simbolam. Respektīvi izies cauri visiem simboliem dotajā masīvā – no sākuma līdz beigām.  
- **for(i=length-1;i>=0;i--)** – šis cikls iziet cauri visiem simboliem masīvā no beigām uz sākumu.  

## Strings
### Funkciju apraksti
- **gets(name)** – nolasa un ieraksta burtu virkni no lietotāja (*Respektīvi, strādā kā scanf()*).  
- **puts(name)** – izvadīt uz ekrāna lietotāja ievadīto tekstu ar atstarpēm.  
- **string.h** – bibliotēka, kurā ir iekļautas sekojošas funkcijas.  
  - **strlen** – drukā viena masīva saturu.  
  - **strcat** – drukā vairāku masīvu saturu. Jāatdala ar komatu (*Piem., strcat(fname,lname)*).  
  - **strlwr** – pārveido visus burtus masīvā par maziem (lower case).  
  - **strupr** – pārveido visus burtus masīvā par lieliem (uper case).  
  - **strrev** – pārliek visus simbolus masīvā reversā (*Piem., no **vova** uztaisa **avov***)  
  - **strcmp** – salīdzina divas burtu kopas burtu pa burtam. Atņemot vienu no otra - pirmo no pirmā, utt. Ja kopas sakrīt, tad izvada "0", ja ir lielāks tad "1", ja mazāks - "-1" (*Piem., printf("%d", strcmp("bbc","zbc"));*).  
  
## Pointers
- **\*p** – ar svaigznīti tiek atzīmēts, ka mainīgais "p" ir pointers.  
- **\*p=&a** – ar šo, mēs piešīram pointeram "p" mainīgā "a" adresi un vērtību.
  Tas paver papild iespējas:  
  - **&a, p** – šie pieraksti dot identisku adreses rezultātu.  
  - **a, \*p, \*(&a)**  – šie pieraksti dot identisku vērtības rezultātu.  

## Allocate Memory
- **malloc()** – šī funkcija rezervē konkrētu atmiņas apgabalu konkrētam mainīgajam (*Piem., name=malloc(200\*sizeof(char)) rezervē 200 bitus atmiņas (jo viens char = 1 bitu)*).  
- **realloc()** – šī funkcija paplašina rezervēto atmiņas apgabalu konkrētam mainīgajam.  
- **free()** – šī funkcija atbrīvo atmiņas apgabalu, tādejādi ļaujot datoram izmantot konkrētu apgabalu citām operācijām.  

## Structures & Union  
- **Structure** or **Union** is collection of different data types.  
- **Size of struct** – sum of size of all variables in it.  
- **Size of union** – size of biggest variable in it.  
- **struct {};** vai **union {};** - šī ir forma, kā tiek pierakstīta šis funkcija. Beigās iet semikolons, kas parasti nav raksturīgs funkcijām.  
## Darbības ar failiem  
### Datu nolasīšana no faila  
1.) Nepieciešams ieviest pointeru **FILE \*p**  
2.) Jāpiešķir šim pointeram faila adresi un tiesības: **p=fopen("Path//file.txt","r")**, kur **r** - lasīt failu (*read*)  
3.) Nosacījums, ja fails ir tukšs vai neeksistē: if(p==NULL)  
4.) Simbolu nolasīšana tiek realizēta caur papild mainīgo un funkciju: **ch=fgetc(p)**  
5.) Tiek lasīts fails līdz pēdējam simbolam: **while(ch!=EOF)**, kur **EOF** – EndOfFile.  
6.) Pārslēgšanās starp simboliem notiek ar to pašu funkciju **ch=fgetc(p)** (nekādi ++ neeksistē!)  
7.) Tiek aizvērts fails ar **fclose(p)**.  
### Datu ierakstīšana no faila  
1.) Jāievieš mainīgais piem., ar 200 zīmēm **char data\[200\]**  
2.) Nepieciešams ieviest pointeru **FILE \*p**  
3.) Jāpiešķir šim pointeram faila adresi un tiesības: **p=fopen("Path//file.txt","w" OR "a")**, kur **w** - ierakstīt failā (*write*) VAI **a** - papildināt esošu ar jaunu informāciju (*append data*)  
3.) Nosacījums, ja fails ir tukšs vai neeksistē: if(p==NULL)  
4.) Simbolu nolasīšana no lietotāja tiek realizēta caur funkciju: **gets(data)**  
5.) Simbolu ierakstīšanatiek realizēta caur funkciju: **fprintf(p,"%s",data)**, kur pirmais mainīgais "p" norāda uz pointeru un pēdējais -   mainīgais, no kura tiek ierakstīts.  
7.) Tiek aizvērts fails ar **fclose(p)**.  
