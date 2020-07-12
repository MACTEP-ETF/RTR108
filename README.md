# RTR108
Studiju kursa Datormācība (speckurss) elektroniskā klade  
- www.py4e.com ‒ Python apguves vietne (mājasdarbs)  

Ikdienā aktīvi darbojos šeit:  
- www.hackerrank.com  
- www.udemy.com  

Atskaišu veidošana python valodā (*\*.ipynb*) failiem.  
- **https:\/\/colab.research.google.com** Atskaites veidošanas vide. Alternatīva *jupiter*.  
- **https:\/\/htmlpreview.github.io\/?** *tālāk seko pilna lapas adrese* ‒ apraksts sekos...   

# Satura rādītājs  
Underconstruction...  

# Uzdevumi  
## P02_04_basics  
Kodus esmu rakstījis galvenokārt pa taisno py4e mājaslapā un pēcāk koopēju uz SAKAI sistēmu, tādēļ man nav izveidoti *Python* un *Diary* faili šiem uzdevumiem.  

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
and       del       from      None      True  
as        elif      global    nonlocal  try  
assert    else      if        not       while  
break     except    import    or        with  
class     False     in        pass      yield  
continue  finally   is        raise     async  
def       for       lambda    return    await  

## P05_ipynb
Tā kā šis uzdevums bija jau veikts C valodā 1. kursa 1. semestri, tad visus komentārus esmu pierakstīji pašā *ipynb* failā. Ne ar kādiem sarežģijumiem nebiju sastapies, un izpildīju uzdevumu, tā teikt, ar vieglu roku. :)  


## P06_OOP
Underconstruction  


## P07_GUI
Underconstruction  

## P09_SPICE
Underconstruction  

## P10_P11_LaTeX
Underconstruction  

## P12_HTML_and_CSS
Underconstruction  

## P13_JavaScript
Underconstruction  

## P14_web_service
Underconstruction  

## P15_frameworks
Underconstruction  

## P16_PrairieLearn
Underconstruction  

# LINUX Bash
## Komandas failiem/folderiem
- **ifconfig** – parāda datora IP adresi. (Piem., http:\/\/10.152.16.149:8001).  
- **ps -aux | grep server** – Task manager, *grep* ‒ ļauj atlasīt procesus pēc atslēgvārda.  
  - **kill \[ProcessCode\]** ‒ Task End.  
- **unzip** ‒ atzipot saturu.  
- **ngrok http 8001** ‒ atver kanālu caur *firewall* šim portam, lai varētu no Pasaules piekļūt pie *python -m* adreses.
  ~~~
  Forwarding                    http://d4618a23.ngrok.io -> http://localhost:8001 
  ~~~
- **script -c "python -m http.server 8001" debug.log** ‒ iespēja ierakstīt procesus log failā pēc lapas aizveršanas.  



# Python v3 

## Īsceļi (shortcuts)
- **Alt+P un Alt+N** – izsauc iepriekšlietotas komandas, alternatīva bultiņām **uz augšu/leju** Terminālā.  
- **F5** – izpilda python kodu python shell vidē.  

<a name="PythonSpec"></a>
## Python Īpašības
- Nav iespējams turpināt darbu ar veco sesiju! Verot vaļā ar komandrindiņu veco dienasgrāmatas failu, var tikai skatīt/kopēt/modificēt saturu, bet izpildīt kodu vairs nav iespējams, tādēļ lai turpinātu iepriekšējo darbu ir jāparkopē tieši/netieši saturu un jāturpina strādāt jau jaunā *dienasgrāmatas* failā!
- Python v3 izpildamās darbības pierakstu forma ir pietuvināta C valodai, savukārt Python v2 - Shell/Bash valodai.  
- Nav nepieciešam atsevišķi deklarēt mainīgos.  
- Nav nepieciešam atsevišķi kompilēt failu ar programmas kodu. Palaišana notiek *pa taisno*.  

<a name="PythonSimple"></a>
## Python Terminālā
- **python** – izsauc Python versiju vienkāršotā veidā turpat Terminālā. **>>>**  
- **.__doc__** - šis papildinājums ļauj iegūt objekta aprakstu (*documentation*) (*Piem., __build_class__.__doc__*)  
  print(__build_class__.__doc__)  - ērtā aplūkošana.  

<a name="PythonDiary"></a>
## Python dienasgrāmatas dokumentācija (.py)
- **idle** – interaktīvi grafiska *Python Shell* forma, ar kuras palīdzību var uzrakstīt Python komandu rindas. OBLIGĀTI faila sākumā rakstīt šo rindiņu: **\# -\*- coding: UTF-8 -\*-** (ar šo rindiņu mēs definējam kodēšanas veidu).  
  Ar šo rindiņu mēs definējam kodēšanas veidu.  
- **python FileName.py** – ar šo komandrindiņu mēs palaižam dienasgrāmatas kodu izpildi. Kā redzams, Pythonam nav nepieciešama papildkompilācija. Viss notiek *on the fly* tā teikt. Kas būtībā ļoti atvieglo un pāatrina programmēšanu!  

<a name="PythonBiblioteka"></a>
## Bibliotēkas
- **random**:
  - **random.random(10)** ģenerē 10 skaitļus no 0 līdz 1.  
  - **random.randint(5,10)** ‒ ģenerē skaitļus intervālā \[5;10\].  
  - **random.choice(t)** ‒ izvēlās vienu no vērtības dotam masīvam un izvada uz ekrāna.  

### Bibliotēkas imortēšanas veidi
- math:
  - import math -> print (math.cos(a))  
  - from math import cos -> print (cos(a))  
  - import math as math_V1 -> print (math_V1.cos(a))  
  - from math import cos as cos_V1 -> print (cos_V1(a))  
  - from math import \*-> print (cos(a))  

<a name="PythonFunkcijas"></a>
## Python funkciju apraksti
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
- **ipython** – draudzīgāka versija pythonam.  
- **python + Tab** – ļauj redzēt papild python versijas.  
- **#!/usr/bin/python** – automatizēta python palaišana (*neaizmirst chmod funkciju (744), lai fails ir executable*).  
- **ls -la /usr/bin/python** – attēlo linku esošai versijai.  
- **ngrok** – izveido piekļuvi web adresei no ārpasaules.  
- **arr = map(int, input().split())** – izveido massīvu *map* veidā. Šo tipu nevar izmantot *for* ciklā kā *C valodā*, priekš tā ir jāpārveido masīvs ar **list()** funkciju ‒ **arrList = list(map(int,arr))**.  
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
- **XX** – XX.  
- **XX** – XX.  
- **XX** – XX.  
- **XX** – XX.  
- **XX** – XX.  

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
and       del       from      None      True  
as        elif      global    nonlocal  try  
assert    else      if        not       while  
break     except    import    or        with  
class     False     in        pass      yield  
continue  finally   is        raise     async  
def       for       lambda    return    await  


## Satura attēlošana pārlūkprogrammā
### Python v2
Ievadīt **python2 -m SimpleHTTPServer 8000**  
Palaist pārlūkprogrammu un ierakstīt **localhost:8000**  
### Python v3
python -m http.server 8001  
Palaist pārlūkprogrammu un ierakstīt **localhost:8001**  
izmantojot komandu *ifconfig* var piekļūt arī caur sava datora IP adresi: http:\/\/10.152.16.149:8001  
plašākas funkcijas Bash-am (terminālam) skatīt [šeit](#BashCommands)  
- localhost = 127.0.0.1  

### Papildinājums nesaistīts
LoRa un 

Gateway (XG or WiFi or Ethernet) savienots ar TTN(the things of network). TTN uz visim norādītiem IP sūta visus datus uz Device1, Device2 utt.  

Caur datora *ngrok* startē retlanslāciju Pasaulei.  
