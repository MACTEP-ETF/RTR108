# RTR108
Studiju kursa Datormācība (speckurss) elektroniskā klade  
- www.py4e.com ‒ Python apguves vietne (mājasdarbs)  
**Daļa no aprakstiem ir angliski un nav tulkoti, jo ir pilnībā saprotams par ko ir runa**

Ikdienā aktīvi darbojos šeit:  
- www.hackerrank.com  
- www.udemy.com  

Atskaišu veidošana python valodā (*\*.ipynb*) failiem.  
- **https:\/\/colab.research.google.com** Atskaites veidošanas vide. Alternatīva *jupiter*.  
- **https:\/\/htmlpreview.github.io\/?** *tālāk seko pilna lapas adrese* ‒ apraksts sekos...   

# Satura rādītājs  
[P02_04_basics](#P02_04_basics)  
[P05_ipynb](#P05_ipynb)  
[P06_OOP](#P06_OOP)  
[P07_GUI](#P07_GUI)  
[P09_SPICE](#P09_SPICE)  
[P10_P11_LaTeX](#P10_P11_LaTeX)  
[P12_HTML_and_CSS](#P12_HTML_and_CSS)  
[P13_JavaScript](#P13_JavaScript)  
[P14_web_service](#P14_web_service)  
[P15_frameworks](#P15_frameworks)  
[P16_PrairieLearn](#P16_PrairieLearn)  

# Uzdevumi  
<a name="P02_04_basics"></a>
## P02_04_basics  
Kodus esmu rakstījis galvenokārt pa taisno py4e mājaslapā un pēcāk koopēju uz SAKAI sistēmu, tādēļ man nav lāgā izveidoti *Python* un *Diary* faili šiem uzdevumiem.  

### Python funkciju apraksti
Vairākas *Python* instrukcijas var rakstīt vienā rindā atdalot tās ar semikolona operatoru (līdzīgi kā C valodā).  

- **a = input()** – *input* funkcija nolasa lietotāja ievadu un ieraksta mainīgajā 'a'.  
- **for i in range(1,n)** – *for* cikls no "1" līdz "n" vērtībai.  
- **try, except** ‒ ir if else paveids. Piemērs:  

  ```
  inp = input('Enter Fahrenheit Temperature:')
  try:
      fahr = float(inp)
      cel = (fahr - 32.0) * 5.0 / 9.0
      print(cel)
  except:
      print('Please enter a number')
  
  # Code: http://www.py4e.com/code3/fahren2.py
  ```
  Explanation:
  Python starts by executing the sequence of statements in the **try** block. If all goes well, it skips the **except** block and proceeds. If an exception occurs in the **try** block, Python jumps out of the **try** block and executes the sequence of statements in the **except** block.  

- **print()** – piemērs korektai izvadei: print("Pēc %g sekundes bumba būs %.2f metru augstumā \n" %(t,y)).  
  - **end=''** – ļauj aizvietot rindiņas beigu elementu (Piem., **print (i, end='')** – ļauj cikla elementu "i" drukāt vienā rindā, nevis katru vērtību nākamā rindiņā).  
  - **sep=''** ‒ no vārds *separator*, ļauj mainīt atdalošu elementu starp drukātiem mainīgiem.  
- **a = input()** – *input* funkcija nolasa lietotāja ievadu un ieraksta mainīgajā 'a'.  
- **type()** – parāda datu tipu. Ja saturs ir ielikts apostrofos **''**, tad tas ir string datu tips.  
- **\/\/** – dalījums ar *floor* efektu.  
- **\*\*** – celšana pakāpē (*Piem., 2\*\*3 = 2\*2\*2 = 8*).  
- **string\*int** – var reizināt arī string datu tipu ar skaitļiem. Piem.:  
  A = 'Test '  
  B = 3  
  print (A*B)  
  Test Test Test  
- **min(), max()** – atrod un izvada uz ekrāna minimālo/maksimālo vērtību no:  
  - ja ir string, tad ievadīt saturu apostrofos;  
  - ja ir skaitliskās vērtības, tad atdalīt ar komatu.  
*P.S. Mainīgos arī var rakstīt iekšā atdalot ar komatu.*  
- **def** – ar šo definē jaunu funkciju (*Piem., def print_lyrics()*). Jauna funkcija tiek palaista - vnk ierakstot tās nosaukumu: *print_lyrics()*. Iespēja ierakstīt funkciju funkcijā. Paraugs:  
```
def print_lyrics():
    print("I'm a lumberjack, and I'm okay.")
    print('I sleep all night and I work all day.')


def repeat_lyrics():
    print_lyrics()
    print_lyrics()

repeat_lyrics()

# Code: http://www.py4e.com/code3/lyrics.py
```
### Logical expression feature
Ja pastāv vairākas loģiskas operācijas, tad ja neizpildās pirmā, tad pārējās (pat ja viņas ir kļūdainas) programma nepārbauda un izlaiž visu!  

### Python comparison operators
- **x != y** – x is not equal to y  
- **x > y** – x is greater than y  
- **x < y** – x is less than y  
- **x >= y** – x is greater than or equal to y  
- **x <= y** – x is less than or equal to y  
- **x is y** – x is the same as y  
- **x is not y** – x is not the same as y  

### Python rezevētie atslēgvārdi

| – | – | – | – | – |  
| :---: | :---: | :---: | :---: | :---: |  
| and | del | from | None | True |  
| as | elif | global | nonlocal | try |  
| assert | else | if | not | while |  
| break | except | import | or | with |  
| class | False | in | pass | yield |  
| continue | finally | is | raise | async |  
| def | for | lambda | return | await |  
| – | – | – | – | – |  

<a name="P05_ipynb"></a>
## P05_ipynb
Tā kā šis uzdevums bija jau veikts C valodā 1. kursa 1. semestri, tad visus komentārus esmu pierakstīji pašā *ipynb* failā. Ne ar kādiem sarežģījumiem nebiju sastapies pārveidojot kodu uz *python* valodu, un izpildīju šo uzdevumu, tā teikt, ar vieglu roku. :)  

<a name="P06_OOP"></a>
## P06_OOP
Esmu jau saskāries ar OOP, kad patstāvīgi apguvu C# vienam brīvā laika projektam. 

### Definīcijas šajā lekcijā
- **Class** – a template (*klišeja, forma, bet ne pats gala produkts*).  
- **Child class** – a new class created when a parent class is extended. The child class inherits all of the attributes and methods of the parent class.  
- **Attribute** – A variable within a class (*Piem., x = 'hi'*).  
- **Method** – A function within a class. (*Piem., x.upper()*).  
- **Object** – A particular instance of a class. (*Piem., fh = open(...)*).  
- **Constructor** – An optional specially named method (__init__) that is called at the moment when a class is being used to construct an object. Usually this is used to set up initial values for the object. (*Code that runs when an object is created*).  
- **Destructor** – An optional specially named method (__del__) that is called at the moment just before an object is destroyed. Destructors are rarely used. 
- **Inheritance** – The ability to extend a class to make a new class.  

### Dažu funkciju/sintakses apraksti
- **type(y)** – konsolē, izvada uz ekrāna dotā mainīgā tipu (*list, int, tuple, utt.*).  
- **dir(y)** – konsolē, izvada uz ekrāna visas iespējamās metodes kas atbilst mainīgā "y" tipam.  
- **PartyAnimal.party** – kur 'punkts' ir objekta operators (*object lookup operator*).  

### Summary (Kopsavilkums)  
-  Object Oriented programming (OOP) is a very structured approach to code reuse.  
-  We can group data and functionality together and create many independent instances of a class.  

### Papildkomentāri
Visi papildkomentāri ir ierakstīti *python* kodos.  

<a name="P07_GUI"></a>
## P07_GUI
Bija ļoti interesanti apgūt un pildīt GUI uzdevumus! Drusciņ paspēlējos ar kodu, lai ir vēl interesantāka apguve. Dažiem uzdevumiem bija nepieciešamība apgūt nedaudz HTML kodu, lai, piem., palielinātu teksta izmēru.   

<a name="P09_SPICE"></a>
## P09_SPICE
Darba uzdevuma apraksts ir saprotams un aizķeršanās bija pavisam neliela ar *value* un *defres* vērtībām.  

<a name="P10_P11_LaTeX"></a>
## P10_P11_LaTeX
Pirms Covid laika es galīgi neorientējos šajā vidē, bet jūlijā pildot šo uzdevumu sapratu, ka viss ir ļoti vienkārši. Vienīgais izskaidrojums - paliku gudrāks un vairāk saprotu angļu valodu nekā pērn.  Viss apraksts pa soļiem ir uztaisīts :aTex vidē (ar attēliem).  

<a name="P12_HTML_and_CSS"></a>
## P12_HTML_and_CSS

<a name="P13_JavaScript"></a>
## P13_JavaScript
Uzdevums bija gana viegls. Visi komentāri mapē "P13_JavaScript".  

<a name="P14_web_service"></a>
## P14_web_service
### LINUX (BASH) termināla komandas 
- **ifconfig** – parāda datora IP adresi. (Piem., http:\/\/10.152.16.149:8001).  
- **ps -aux | grep server** – Task manager, *grep* ‒ ļauj atlasīt procesus pēc atslēgvārda.  
  - **kill \[ProcessCode\]** ‒ Task End.  
- **unzip** ‒ atzipot saturu.  
- **ngrok** – izveido piekļuvi web adresei no ārpasaules.  
- **ngrok http 8001** ‒ atver kanālu caur *firewall* šim portam, lai varētu no Pasaules piekļūt pie *python -m* adreses.
  ~~~
  Forwarding                    http://d4618a23.ngrok.io -> http://localhost:8001 
  ~~~
- **script -c "python -m http.server 8001" debug.log** ‒ iespēja ierakstīt procesus log failā pēc lapas aizveršanas.  

### Satura attēlošana pārlūkprogrammā
#### Python v2
Ievadīt **python2 -m SimpleHTTPServer 8000**  
Palaist pārlūkprogrammu un ierakstīt **localhost:8000**  
#### Python v3
python -m http.server 8001  
Palaist pārlūkprogrammu un ierakstīt **localhost:8001**  
izmantojot komandu *ifconfig* var piekļūt arī caur sava datora IP adresi: http:\/\/10.152.16.149:8001  
plašākas funkcijas Bash-am (terminālam) skatīt [šeit](#BashCommands)  
- localhost = 127.0.0.1  

### Papildinājums nesaistīts
LoRa un 

Gateway (XG or WiFi or Ethernet) savienots ar TTN(the things of network). TTN uz visim norādītiem IP sūta visus datus uz Device1, Device2 utt.  

Caur datora *ngrok* startē retlanslāciju Pasaulei.  



<a name="P15_frameworks"></a>
## P15_frameworks
Underconstruction  

<a name="P16_PrairieLearn"></a>
## P16_PrairieLearn
Links neiet.   








# BACKUP
- **XX** – XX.  
- **XX** – XX.  
- **XX** – XX.  
- **XX** – XX.  

