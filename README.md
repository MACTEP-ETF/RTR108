# RTR105
Studiju kursa Datormācība (pamatkurss) elektroniskā klade  

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
  - [Īpašības](#PythonSpec)
  - [Python Shell](#PythonShell)
  - [Python dienasgrāmatas dokumentācija (.py)](#PythonDiary)
  - [Funkcijas](#PythonFunkcijas)
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
- **ls -l** – tekošā foldera detalizēts skats.  
- **ls -l \Path\FileName** – konkreta faila detalizēts skats (*Nav obligāti atrasties tajā adresē, var darboties arī attālināti!*).  
- **ls -a** – parādā visus objektus (tai skaitā *hidden files*).  

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

<a name="PythonSpec"></a>
### Python Īpašības
- Nav iespējams turpināt darbu ar veco sesiju! Verot vaļā ar komandrindiņu veco dienasgrāmatas failu, var tikai skatīt/kopēt/modificēt saturu, bet izpildīt kodu vairs nav iespējams, tādēļ lai turpinātu iepriekšējo darbu ir jāparkopē tieši/netieši saturu un jāturpina strādāt jau jaunā *dienasgrāmatas* failā!
- Python v3 izpildamās darbības pierakstu forma ir pietuvināta C valodai, savukārt Python v2 - Shell/Bash valodai.  
- Nav nepieciešam atsevišķi deklarēt mainīgos.  
- Nav nepieciešam atsevišķi kompilēt failu ar programmas kodu. Palaišana notiek *pa taisno*.  

<a name="PythonShell"></a>
### Python Shell
- **python** – izsauc Python versiju vienkāršotā veidā turpat Terminālā. **>>>**  
- **idle** – interaktīvi grafiska *Python Shell* forma.  
  - **&** – šī sintakse atver programmu *background* režīmā, ļaujot strādāt kā pašā programmā, tā arī Terminālā.  

<a name="PythonDiary"></a>
### Python dienasgrāmatas dokumentācija (.py)
- ar IDLE vai citu redaktora palīdzību var uzrakstīt Python komandu rindu. OBLIGĀTI faila sākumā rakstīt šo rindiņu:    
  - \# -*- coding: UTF-8 -*-  
  Ar šo rindiņu mēs definējam kodēšanas veidu.  
- **python FileName.py** – ar šo komandrindiņu mēs palaižam dienasgrāmatas kodu izpildi. Kā redzams, Pythonam nav nepieciešama papildkompilācija. Viss notiek *on the fly* tā teikt. Kas būtībā ļoti atvieglo un pāatrina programmēšanu!  

<a name="PythonFunkcijas"></a>
### Python funkciju apraksti
Vairākas *Python* instrukcijas var rakstīt vienā rindā atdalot tās ar semikolona operatoru (līdzīgi kā C valodā).  

- **print()** – piemērs korektai izvadei: print("Pēc %g sekundes bumba būs %.2f metru augstumā \n" %(t,y)).  
  - Atšķirībā no C valodas, Pythonam mēs mainīgos rakstam papildiekavās un pirms mainīgo iekavām norādam datu/virknes tipu *%*  

- **a = input()** – *input* funkcija nolasa lietotāja ievadu un ieraksta mainīgajā 'a'.  

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
