# RTR108
Studiju kursa Datormācība (speckurss) elektroniskā klade
- www.py4e.com ‒ Python apguves vietne (mājasdarbs)  

Ikdienā aktīvi darbojos šeit:
- www.hackerrank.com
- www.udemy.com

# Satura rādītājs  
- [Ievads](#Ievads)
  - [Darba vides struktūra](#DarbaVide)
  - [ASCII](#ASCII)
- [Skaitļošanas sistēmas un to apzīmējumi](#SkSistemas)
  - [Decimal to Binary](#DecToBin)  
  - [Binary to Decimal](#BinToDec)  
  - [Decimal to Hexadecimal](#DecToHex)  
  - [Hexadecimal to Decimal](#HexToDec)  
  - [Decimal to Octadecimal](#DecToOct)  
  - [Octadecimal to Decimal](#OctToDec)  
- [Linux](#Linux)  
  - [Terminals](#Terminals)
    - [Īsceļi (shortcuts)](#TerminalShortcuts)
    - [Interfeiss](#Interfeiss)
    - [Failu detalīzētā skata apraksts (ls -l)](#TerminalDetails)
  - [Bash](#Bash)
    - [Īsceļi (shortcuts)](#BashShortcuts)
    - [Apraksts par sistēmu](#BashSystemDetails)
    - [Failu sistēmas navigācija](#FileSystem)
    - [Komandas](#BashCommands)
- [Koda redaktori](#KODS)
  - [Vim](#Vim)  
    - [Īsceļi (shortcuts)](#VimShortcuts)
  - [Nano](#Nano)  
    - [Īsceļi (shortcuts)](#NanoShortcuts)
    - [Bibliotekas](#NanoBibliotekas)
    - [Funkcijas](#NanoFunkcijas)
    - [Datu tipi (izplatītākie)](#NanoDataTypes)
    - [Darbības ar bitiem](#WorkWithBytes)
    - [C operatora prioritātes](#C_priorities)
    - [Vispārīgi](#Miscs)
- [Python v3](#Python)  
  - [Īsceļi (shortcuts)](#PythonShortcuts)
  - [Bibliotekas](#PythonBiblioteka)
  - [Īpašības](#PythonSpec)
  - [Python vispārīgi](#PythonSimple)
  - [Python dienasgrāmatas dokumentācija (.py)](#PythonDiary)
  - [Funkcijas](#PythonFunkcijas)
  - [Pievienot jaunumus...]()
  - [Satura attēlošana pārlūkprogrammā](#Web)
  - [Tips & Tricks](#Tips&tricks)
- [GNUPLOT](#GNUPLOT)
  - [Komandas](#GnuplotCommands)
- [FUNKCIJU Templates](#Templates)

<a name="Ievads"></a>
# Ievads
<a name="DarbaVide"></a>
## Darba vides struktūra
- **Hardware** – dzelzis (PC sastāvdaļas):  
  - CPU;  
  - RAM (short);  
  - ROM (long);  
  - Perifērijas ierīces (pele, tastatūra, monitors utt.);  
  - Divi pamatelementi – "0" un "1".  
- **OS Linux operētājsistēma** – sazinās ar dzelzi izmantojot *drivers* (iebūvētās instrukcijas).  
- **Bash interpretators** – sazinās ar OS Linux izmantojot *Shell* valodu.  
- **Applications** – Aplikācijas. 

<a name="ASCII"></a>
## ASCII character map
**ASCII** ir burtu/ciparu karte, kurā ir iekļauti 256 simboli. 128 no tiem ir standarta un atlikušie - papildinājums atkarībā no valodas. Pirmie 32 simboli ir neredzamie – tie ir darbības simboli.
- **LSB** – Least significant bit - reprezentē pašu mazāko skaitļa vērtību binārajā sistēmā. 1000 100**0**.
- **MSB** – Most significant bit - reprezentē pašu lielāko skaitļa vērtību binārajā sistēmā. **1**000 1000.   

<a name="SkSistemas"></a>
# Skaitļošanas sistēmas
Skaitļošanas sistēmas apzīmējumu raksta cipara beigās subscript veidā! (*Piem., 12<sub>10</sub> - decimālā sistēma. 1110<sub>2</sub> - binārā sistēma. 41<sub>16</sub> - heksadecimālā sistēma*).  
Lai pārietu no vienas skaitļošanas sistēmu uz otru, izejas skaitlis tiek dalīts ar pārejas skaitļošanas sistēmas bāzi! Piem., binārās sistēmas bāze ir 2, decimālās - 10, heksadecimālās - 16. Tātad, skaitlis tiek datīts ar "sistēmas bāzi" un atlikums tiek ierakstīts iekavās "()". Dalīšana turpinās tiktāl, līdz dalījums ir vienāds ar "0". Jaunās skaitļošanas sistēmas skaitlis tiek pārrakstīts no iekavām no apakšas uz augšu. Skat. piemērus!  

<a name="DecToBin"></a>
#### Dec to Bin:  
**Piemērs**:  
65<sub>10</sub> : 2 = 32 (1) - LSB (Least Significant Bit)  
32<sub>10</sub> : 2 = 16 (0)  
16<sub>10</sub> : 2 = 8 (0)  
8<sub>10</sub> : 2 = 4 (0)  
4<sub>10</sub> : 2 = 2 (0)  
2<sub>10</sub> : 2 = 1 (0)  
1<sub>10</sub> : 2 = 0 (1) - MSB (Most Significant Bit)  
Binārais skaitlis = 100 0001<sub>2</sub>  

<a name="BinToDec"></a>
#### Bin to Dec:  
Decimālā skaitļošanas sistēmā ir 10 skaitļi {0, 1, 2, 3, 4, 5, 6, 7, 8, 9} un to kārtas var tikt atzīmētas sekojoši: piem., skaitli 256 var pierakstīt šādi = 2\*10<sup>2</sup> + 5\*10<sup>1</sup> + 6\*10<sup>0</sup> = 256. Tāpat ir arī ar bināriem skaitļiem ar vienu BET! Binārā sistēmā ir tikai divi skaitļi {0, 1}, tādejādi arī kārtas ir nevis 10<sup>pakāpē</sup>, bet gan 2<sup>pakāpē</sup>  
**Piemērs**:  
100 0001<sub>2</sub> = 1\*2<sup>6</sup> + 0\*2<sup>5</sup> + 0\*2<sup>4</sup> + 0\*2<sup>3</sup> + 0\*2<sup>2</sup> + 0\*2<sup>1</sup> + 1\*2<sup>0</sup> = 64+0+0+0+0+0+1 = 65<sub>10</sub>  

<a name="DecToHex"></a>
#### Dec to Hex:  
Hexadecimālā skaitļošanas sistēmā ir 16 skaitļi {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F} un to kārtas tiek atzīmētas pēc tāda paša principa kā iepriekš.  
**Piemērs**:  
65<sub>10</sub> : 16 = 4 (1)  
4<sub>10</sub> : 16 = 0 (4)  
Heksadecimāls skaitlis = 41<sub>16</sub>  
Tiek apzīmēts arī kā: 0x41  

<a name="HexToDec"></a>
#### Hex to Dec:  
**Piemērs**:  
41<sub>16</sub> = 4\*16<sup>1</sup> + 1\*16<sup>0</sup> = 64 + 1 = 65<sub>10</sub>  

<a name="DecToOct"></a>
#### Dec to Oct:  
Oktālā skaitļošanas sistēmā ir 8 skaitļi {0, 1, 2, 3, 4, 5, 6, 7} un to kārtas tiek atzīmētas pēc tāda paša principa kā iepriekš.
**Piemērs**:  
65<sub>10</sub> : 8 = 8 (1)  
8<sub>10</sub> : 8 = 1 (0)  
1<sub>10</sub> : 8 = 0 (1)  
Oktālais skaitlis = 101<sub>8</sub>  

<a name="OctToDec"></a>
#### Oct to Dec:  
**Piemērs**:  
101<sub>8</sub> = 1\*8<sup>2</sup> + 0\*8<sup>1</sup> + 1\*8<sup>0</sup> = 64 + 1 = 65<sub>10</sub> 

<a name="Linux"></a>
# LINUX
**Katrs simbols ir noteikts pēc ASCII kartes! Respektīvi, "Ram" un "ram" nav viens un tas pats!**  

<a name="Terminals"></a>
## Termināls
<a name="TerminalShortcuts"></a>
### Īsceļi (shortcuts)
- **Ctrl+Alt+T** – jauna termināla loga atveršana.  
- **Ctrl+Shift+T** – jauna papildloga atveršana esošajā termināla.  

<a name="Interfeiss"></a>
### Interfeiss  
**user@epk428-2:/home$**:
- **user** – lietotāja vārds;  
- **epk428** – serveris;  
- **2** – darba stacijas numurs;  
- **/home$** – tekošais folderis.  
Ja faila/foldera nosaukums sākas ar ".", tad objekts ir režīmā ***hidden***.  

<a name="TerminalDetails"></a>
### Failu detalīzētā skata apraksts
**drwx | r-x | r-x**:
- **d** – direktorija (*Ja defise, tad fails*);
- **r** – read;
- **w** – write;
- **x** – execute;
- **1. kolonna (rwx)** – administrātora tiesības uz objektu;  
- **2. kolonna** – lietotāja tiesības uz objektu;  
- **3. kolonna** – visas pārējās pasaules tiesības uz objektu.  

<a name="Bash"></a>
## Bash
<a name="BashShortcuts"></a>
### Īsceļi (shortcuts)
- **Ctrl+L** – ekrāna attīrīšana (*Clear screen*).  
- **TAB 2x** – papildina kodu uzrādot iespējamos variantus.  
- **TAB 1x** – papildina kodu ar vienīgo iespējamo variantu.  

<a name="BashSystemDetails"></a>
### Apraksts par sistēmu
- **whoami** – lietotājs (*kas es esmu?*).  
- **uname** – operētājsistēmas nosaukums.  
- **echo $0** – noklusētā interpretatora nosaukums.  
- **sh** – kompaktā interpretatora izsaukšana.  

<a name="FileSystem"></a>
### Failu sistēmas navigācija
- **.** – norāde uz esošu vietu.  
- **cd .** – norāde/solis uz vietas (*relatīvā adresācija*).  
- **cd ..** – norāde/solis līmeni augstāk.  
- **cd** – atgriešanās mājas apgabalā.  
- **~$** – mājas apgabals.  
- **/** – saknes apgabals.  
- **cd /home** – pāreja uz konkrētu adresi (folderi).  
- **pwd** – parāda kāda ir adrese tekošam folderim (*kur es esmu?*).  
- **ls** – parāda kas atrodas tekošā folderī (*kas man ir pieejams*).  
  - **ls -l** – tekošā foldera detalizēts skats.(*Nav obligāti atrasties tajā adresē, var darboties arī attālināti!*).  
  - **ls -a** – parādā visus objektus (tai skaitā *hidden files*).  
  - **ls -lt** – ļauj *atzipot* saturu no citas direktorijas tekošajā.  

<a name="BashCommands"></a>
#### Komandas failiem/folderiem
**Ir iespējams strādāt ar failiem/folderiem attālināti! Respektīvi nav jāatrodas tai pašā adresē kā fails, lai varētu, piem.: skatīt detalizēti skatu par viņu, rediģēt viņu, pārvietot, dzēst - veikt dajebkādas darbības! Lai pārvietotu folderi no viena uz otru atrodoties trešajā, pirmajam priekšā jāraksta punkts: "./FirstDestination" "/SecondDestination"**  
- **PS1="$ "** – šis komanda atbrīvo komandas rindu no liekā ceļa (tikai vizuāli). Respektīvi uz ekrāna mēs redzam tikai **$** nevis kā ierasts **user@epk428-2:~$** ;  
- **chmod FileName** – rediģēt tiesības uz failu/folderi (Read/Write/Execute). Kods "740" ļauj palaist ekzekjūcijas failus.  
- **whereis FileName** – parāda uz ekrāna dotā faila atrašanas vietu (*Ja, meklējamais fails atrodas jaunizveidotā folderī, tad sistēma nespēs atrast failu! Kā arī nebūs iespējams palaist viņu, pat ja Tu atrodies faila atrašanas folderī! **Skat. "echo $PATH" aprakstu!***)  
- **cat** – skatīt faila saturu uz ekrāna (*Rediģēšanas iespēju nav!*).  
- **nano** – rediģēšanas programma (*Alternatīva **Notepad++***).  
- **gcc** – kompilācijas komanda.  
- **gcc FileName.c -o prog1** – kompilē failu FileName.c. Parametrs **-o** piešķir izkompilētam failam nosaukumu, mūsu gadījumā "prog1".  
- **./FileName** – palaiž failu (*Nav obligāti nepieciešams iekļaut failu PATH sistēmā*).  
- **touch FileName** – izveidot jaunu failu.  
- **touch -c -t Date&Time FileName** – pārraksta konkrēta faila modifikācijas datumu un laiku (*Paraugs: 201909171000, kur **2019** - gads; **09** - mēnesis; **17** - datums; **1000** - laiks*).  
- **cp** – kopēt failu (*No - uz*).  
- **cp -r** – kopēt folderi ar visu saturu (*No - uz*).  
- **mv** – pārvietot failu (*No - uz. Kā arī pārsaukt tekošu, ja mērķa fails jau eksistē*).  
- **mv -r** – pārvietot folderi ar visu saturu (*No - uz.*).  
- **rm** – izdzēst vienību (*Izdēst kopu ar atbilstošu masku (\*)*).  
- **rm -r** – izdzēs folderi ar visu saturu (*Ir neatgriezeniska darbība!*).  
- **mkdir FolderName** – izveidot jaunu folderi tekošajā foderī.  
- **echo** – printēt uz ekrāna tekstu (*Piem., echo Hello World*). Izmantojot kopā ar **>** tiks ierakstīt failā: **a**.) Ja fails neeksistē, tad izveido jaunu; **b**.) Ja fails eksistē, tad pārraksta (dzēšot veco saturu).  
- **$PATH** – parāda uz ekrāna visus iekešotos ceļus sistēmā!  
- **echo $PATH RequirePath** – pievieno ceļu nepieciešamajam folderim.  
- **echo -e "Hello\vWorld"** – izdrukā uz ekrāna *Hello World*. Simbolu virkne "\v" ir darbības simbols, kurš pārnes uz nākamo rindiņu turpmāko saturu tieši zem sevis. T.i., šis nav parasts *Enter*! Sintaksis -e aktivizē papild bibliotēku ar aprakstu par "\v" un citiem darbības simboliem (*detalizētāk skatīt **man echo***).  
- **ifconfig** – parāda datora IP adresi. (Piem., http:\/\/10.152.16.149:8001).  
- **ps -aux | grep server** – Task manager, *grep* ‒ ļauj atlasīt procesus pēc atslēgvārda.  
  - **kill \[ProcessCode\]** ‒ Task End.  
- **unzip** ‒ atzipot saturu.  
- **ngrok http 8001** ‒ atver kanālu caur *firewall* šim portam, lai varētu no Pasaules piekļūt pie *python -m* adreses.
  ~~~
  Forwarding                    http://d4618a23.ngrok.io -> http://localhost:8001 
  ~~~
- **script -c "python -m http.server 8001" debug.log** ‒ iespēja ierakstīt procesus log failā pēc lapas aizveršanas.  




<a name="KODS"></a>
# Koda redaktori

<a name="Vim"></a>
## Vim redaktors (C valoda)
<a name="VimShortcuts"></a>
### Īsceļi (shortcuts)
- **Esc+:** – izsauc komandu rindu.  
  - **q** – iziet no redaktora.  
  - **q!** – piespiedu izeja no redaktora (ja fails nav saglabāts, paziņojums neizlec un fails NETIEK saglabāts).  
  - **w** – ierakstīt izmaiņas failā (*Save*).  
  - **:set number** – kreisajā sānā parādās rindiņu numerācija.  
  
<a name="Nano"></a>
## Nano redaktors (C valoda)
<a name="NanoShortcuts"></a>
### Īsceļi (shortcuts)
- **Ctrl+K** – Cut.  
- **Ctrl+U** – Paste.  
- **Ctrl+S** – Save.  
- **Ctrl+X** – Quit.  
- **Alt+U** – Undo.  

<a name="NanoBibliotekas"></a>
### Bibliotekas
#### <math.h> bibliotēka
**Iepriekš noteiktas matemātiskās konstances**
- **M_PI** – Pi, apļa apkārtmēra un tā diametra attiecība.  

<a name="NanoFunkcijas"></a>
### Funkcijas
- **main() {}** – Funkcija main. **()** – vieta argumentam. **{}** – funkcijas izpildošā daļa.  
- **void** – funkcija rezultātu neatgriež.  
- **printf() darbības simboli:**
  - **\n** – pāriet uz nākamo rindiņu.  
  - **\r** – pāriet rindiņas sākumā.  
  - **\t** – tabulācija (pārcelšana uz tuvāko TAB pozīciju).  
  - **\a** – skaņas simbols.  
  - **\'** – apostrofs.  
  - **\"** – pēdiņa.  
  - **\?** – jautājumzīme.  
  - **\\** – sleš.  
  - **\b** – kursors 1 solis atpakaļ.  
  - **\v** – vertikālā tabulācija.  
  - **10.8f** – pirmais cipars '10'  apzīmē cik simbolus rādīt pirms komata, tādejādi veidojot izvietojuma struktūru (lai nav jāizmanto tabulācija un velns zin ko vēl :D). Otrs cipars - cik simbolus attēlot pēc komata, turklāt pēdējo **noapaļojot**.  
- **srand** un **rand**
```
  //Gadijumskaitļa ģenerācijas inicializēšana
  srand();
  //Ģenerē un iegaumē skaitļus diapazonā no 0 līdz N skaitlim
	for (i=0; i<N; i++)
	{
		a[i]=rand()%50000; //ieraksta masīvā gadījumskaitli no 0 līdz norādītam skaitlim aiz '%' zīmes
	}
```
<a name="NanoDataTypes"></a>
### Datu tipi (izplatītākie)
- **char b = 'A'** – šī koda rindiņa definē trīs darbības:  
1.) Atmiņā tiek rezervēts atmiņas daudzums dotam datu tipam *char* – 1 baits (8 biti).  
2.) Tiek deklarēts "b" elements.  
3.) Elementam tiek piešķirta vērtība 'A'.   

- **char** – paredzēts tikai simbolu glabāšanai, bet var būt izmantots arī veseliem skaitļiem kā *int*. Atmiņas diapazons ir ļoti mazs - 1 baits (8 biti) - 256 zīmes. Tādejādi skaitliskais diapazons no -128 līdz +127 (0 tai skaitā!).
- **unsigned "datuTipaNosaukums"** – nosaka, ka dotajā datu tipā būs tikai vienas zīmes elementi. (*Piem., ja tas ir **unsigned char**, tad dotajā datu tipā skaitliskais diapazons būs no +0 līdz +255.*). *Unsigned* elements tiek ierakstīts iekš MSB. Ja MSB ir "0", tad tā ir pozitīvā zīme, bet ja "1" - negatīvā.  
- **int** – visi veselie skaitļi. Atkarībā no interpretatora, piešķirtais atmiņas apgabals dotam datu tipam ir atšķirīgs. **No 2** (16 bitiem) **līdz 4** (32 bitiem) **baitiem**. Piem., 4 baitu diapazons ir: no -2,147,483,648 līdz 2,147,483,647.  
- **long int** – tas pats kas *int*, tikai ar paplašinātu atmiņas apjomu – **4–12 baiti**.  
- **float** – visi reālie skaitļi (respektīvi, arī daļskaitļi). **4 baitu** liels datu tips un līdz **6 zīmēm aiz komata**.  
- **double** – tas pats kas *float*, tikai ar paplašinātu atmiņas apjomu – **8 baiti** un līdz **15 zīmēm aiz komata**.  
- **long double** – tas pats kas *double float*, tikai ar paplašinātu atmiņas apjomu – **10 baiti** un līdz **19 zīmēm aiz komata**.  

<a name="WorkWithBytes"></a>
### Darbības ar bitiem
- **~** – noliegums pa bitiem. Piemērs:  

| Izteiksme | Rezultāts |  
| --- | --- |  
| baits | 1001 0111 |  
| baits =~baits | 0110 1000 |  

- **\<<, \>>** – bitu virzienā maiņa pa kreisi, pa labi. (*Piezīme. Bīdot uz kreiso vai labo pusi, jaunie biti, kas ienāk laukā ir 0.*) Piemērs:  

| Izteiksme | Rezultāts |  
| --- | --- |  
| baits | 0010 0001 |  
| baits = baits << 1 | 0100 0010 |  
| baits = baits << 2 | 0000 1000 |  
| baits = baits >> 3 | 0000 0001 |  

- **|, ^, &** – divu izteiksmju salīdzināšana pa bitiem: loģiskais VAI, izslēdzošais VAI. loģiskais UN. Piemērs:  
Pieņemsim, ka mums ir divas *unsigned char* izteiksmes: b1 = 101<sub>10</sub>, b2 = 175<sub>10</sub>.

| Izteiksme | Rezultāts |  
| --- | --- |  
| b1 | 0110 0101 |  
| b2 | 1010 1111 |  
| b1 \| b2 | 1110 1111 |  
| b1 ^ b2 | 1100 1010 |  
| b1 & b2 | 0010 0101 |  

<a name="C_priorities"></a>
### C operatora prioritātes
- **\*, /, %** – reizināšana, dalīšana un atlikums.  
- **+, -** – saskaitīšana un atņemšana.  
- **<, <=** – salīdzināšanas operācija starp divām izteiksmēm, attiecīgi: mazāks kā (<), mazāks vai vienāds (≤).  
- **>, >=** – salīdzināšanas operācija starp divām izteiksmēm, attiecīgi: lielāks kā (>), lielāks vai vienāds (≥).  
- **==, !=** – izteiksmes salīdzināšanas oerpācija, attiecīgi: vienāds, nav vienāds.  
- **!** – loģiskais NE. (*Piem., **! izteiksme1***)  
- **||** – loģiskais VAI. (*Piem., **izteiksme1 || izteiksme2***)  
- **&&** – loģiskais UN. (*Piem., **izteiksme1 && izteiksme2***)  

<a name="Miscs"></a>
### Vispārīgi
- **git clone "arguments"** – kopē esošajā folderī visu repozitoriju no github. Argumentā norādīt repozitorija ceļu: https://github.com/MACTEP-ETF/RTR105.  
- **git-upload parametri*** – lai augšuplādētu paveiktos darbus, kā argumentu ierakstīt laiku (*Piem., 20192909_10_10*).  
- **\*** – maska (*Piem., \*.txt*).  
- **firefox** – Firefox palaišana.  
- **man** – dod detalizēts apraksts par tekošu kodu (*Jāpieraksta pirms nepieciešamās komandas*).  
- **history** – parāda uz ekrāna visas veiktās operācijas/komandas.  
- **>** – konveijera simbols. konkrētas informācijas ierakstīšana failā (*Piem., history > File.txt*).  
- **>>** – satura papildināšana. (*Ja fails nav izveidots, tad izveido jaunu. Ja eksistē, tad papildina ar esošu informāciju*)  
- **init 0** – OS Linux shutdown.  

<a name="Python"></a>
## Python v3 
<a name="PythonShortcuts"></a>
### Īsceļi (shortcuts)
- **Alt+P un Alt+N** – izsauc iepriekšlietotas komandas, alternatīva bultiņām **uz augšu/leju** Terminālā.  
- **F5** – izpilda python kodu python shell vidē.  

<a name="PythonSpec"></a>
### Python Īpašības
- Nav iespējams turpināt darbu ar veco sesiju! Verot vaļā ar komandrindiņu veco dienasgrāmatas failu, var tikai skatīt/kopēt/modificēt saturu, bet izpildīt kodu vairs nav iespējams, tādēļ lai turpinātu iepriekšējo darbu ir jāparkopē tieši/netieši saturu un jāturpina strādāt jau jaunā *dienasgrāmatas* failā!
- Python v3 izpildamās darbības pierakstu forma ir pietuvināta C valodai, savukārt Python v2 - Shell/Bash valodai.  
- Nav nepieciešam atsevišķi deklarēt mainīgos.  
- Nav nepieciešam atsevišķi kompilēt failu ar programmas kodu. Palaišana notiek *pa taisno*.  

<a name="PythonSimple"></a>
### Python Terminālā
- **python** – izsauc Python versiju vienkāršotā veidā turpat Terminālā. **>>>**  
- **.__doc__** - šis papildinājums ļauj iegūt objekta aprakstu (*documentation*) (*Piem., __build_class__.__doc__*)  
  print(__build_class__.__doc__)  - ērtā aplūkošana.  

<a name="PythonDiary"></a>
### Python dienasgrāmatas dokumentācija (.py)
- **idle** – interaktīvi grafiska *Python Shell* forma, ar kuras palīdzību var uzrakstīt Python komandu rindas. OBLIGĀTI faila sākumā rakstīt šo rindiņu: **\# -\*- coding: UTF-8 -\*-** (ar šo rindiņu mēs definējam kodēšanas veidu).  
  Ar šo rindiņu mēs definējam kodēšanas veidu.  
- **python FileName.py** – ar šo komandrindiņu mēs palaižam dienasgrāmatas kodu izpildi. Kā redzams, Pythonam nav nepieciešama papildkompilācija. Viss notiek *on the fly* tā teikt. Kas būtībā ļoti atvieglo un pāatrina programmēšanu!  

<a name="PythonBiblioteka"></a>
### Bibliotēkas
- **random**:
  - **random.random(10)** ģenerē 10 skaitļus no 0 līdz 1.  
  - **random.randint(5,10)** ‒ ģenerē skaitļus intervālā \[5;10\].  
  - **random.choice(t)** ‒ izvēlās vienu no vērtības dotam masīvam un izvada uz ekrāna.  

#### Bibliotēkas imortēšanas veidi
- math:
  - import math -> print (math.cos(a))  
  - from math import cos -> print (cos(a))  
  - import math as math_V1 -> print (math_V1.cos(a))  
  - from math import cos as cos_V1 -> print (cos_V1(a))  
  - from math import \*-> print (cos(a))  

<a name="PythonFunkcijas"></a>
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

#### Logical expression feature
Ja pastāv vairākas loģiskas operācijas, tad ja neizpildās pirmā, tad pārējās (pat ja viņas ir kļūdainas) programma nepārbauda un izlaiž visu!  

#### Python comparison operators
- **x != y** – x is not equal to y  
- **x > y** – x is greater than y  
- **x < y** – x is less than y  
- **x >= y** – x is greater than or equal to y  
- **x <= y** – x is less than or equal to y  
- **x is y** – x is the same as y  
- **x is not y** – x is not the same as y  


#### Python rezevētie atslēgvārdi
and       del       from      None      True  
as        elif      global    nonlocal  try  
assert    else      if        not       while  
break     except    import    or        with  
class     False     in        pass      yield  
continue  finally   is        raise     async  
def       for       lambda    return    await  


<a name="Web"></a>
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

<a name="Tips&tricks"></a>
### Tips & tricks
```
for i in range(1,int(input())+1):
    print (((10**i-1)//9)**2)    
```
Paskaidrojumi matemātiskām darbībām:  
- **\*\*** – tas ir kāpinātājs, tāpat kā "^" zīme vai funkcija *pow()* C valodā.  
- **\/\/** – tā ir dalīšana bez daļskaitļiem.  

1 -> (   10 - 1) \/ 9 =    1,    1 \*    1 = 1  
2 -> (  100 - 1) \/ 9 =   11,   11 \*   11 = 121  
3 -> ( 1000 - 1) \/ 9 =  111,  111 \*  111 = 12321  
4 -> (10000 - 1) \/ 9 = 1111, 1111 \* 1111 = 1234321  

#### Papildinājums nesaistīts
LoRa un 

Gateway (XG or WiFi or Ethernet) savienots ar TTN(the things of network). TTN uz visim norādītiem IP sūta visus datus uz Device1, Device2 utt.  

Caur datora *ngrok* startē retlanslāciju Pasaulei.  


<a name="GNUPLOT"></a>
# GNUPLOT
Katrs grafiks ar parametriem, tiek atdalīts no otra ar "komatu".  

<a name="GnuplotCommands"></a>
## Komandas
- Šeit var atpskatīt GNUPLOT komandu un iespēju [PDFu](http://www.hpc.lsu.edu/training/weekly-materials/2016-Fall/Gnuplot-28Sep2016.pdf)
- **plot "FileName.dat"** – zīmē grafiku.  
- **replot "FileName.dat"** – pievieno papild grafiku jau esošam. (replot bez parametra - attēlot grafiku, ja piem., esi aizvēris grafika failu.)  
- **[-2:2]** – definē vērtību intervālu no -2 līdz 2.  
- **using 1:2** – norāda, ka no faila jānolasa tikai pirmā un otrā kolonna.  
- **with lines** – grafika punkti būs sapludināti vienā līnijā.  
- **Grafika līknes parametri:**  
  - **lt 2** – definē līknes tipu (*line type*);  
  - **lw 2** – definē līknes biezumu (*line weight*);  
  - **lc rgb "green"** – definē, līknes krāsu - zaļa (*line color*);  

<a name="Templates"></a>
# FUNKCIJU Templates
## Funkcija atrod lielāko kopīgo dalītāju  
```
int dal(int v1, int v2)  
{  
 int temp;  
 while(v2)  
 {  
  temp=v2; v2=v1%v2; v1=temp;  
 }  
 return v1;  
}  
```
## Search array for the largest value
```
for (z=1; z<ar_count; z++) {
    if (ar[z] > ar[max]) {
        max = z;
    }
}
```
