# RTR105
Studiju kursa Datormācība (pamatkurss) elektroniskā klade  
# Vispārīgi
## Hardware (PC sastāvdaļas):
- CPU;  
- RAM (short);  
- ROM (long);  
- Perifērijas ierīces (pele, tastatūra, monitors utt.);
- Divi pamatelementi – "0" un "1".  

## Darba vides struktūra
1. **Hardware** – dzelzis.  
2. **OS Linux operētājsistēma** – sazinās ar dzelzi izmantojot *drivers* (iebūvētās instrukcijas).  
3. **Bash interpretators** – sazinās ar OS Linux izmantojot *Shell* valodu.  
4. **Applications** – Aplikācijas. 

## ASCII character map
**ASCII** ir burtu/ciparu karte, kurā ir iekļauti 256 simboli. 128 no tiem ir standarta un atlikušie - papildinājums atkarībā no valodas. Pirmie 32 simboli ir neredzamie – tie ir darbības simboli.
- **LSB** – Least significant bit - reprezentē pašu mazāko skaitļa vērtību binārajā sistēmā. 1000 100**0**.
- **MSB** – Most significant bit - reprezentē pašu lielāko skaitļa vērtību binārajā sistēmā. **1**000 1000.   

## Skaitļošanas sistēmas
Skaitļošanas sistēmas apzīmējumu raksta cipara beigās subscript veidā! (*Piem., 12<sub>10</sub> - decimālā sistēma. 1110<sub>2</sub> - binārā sistēma. 41<sub>16</sub> - heksadecimālā sistēma*).  
Lai pārietu no vienas skaitļošanas sistēmu uz otru, izejas skaitlis tiek dalīts ar pārejas skaitļošanas sistēmas bāzi! Piem., binārās sistēmas bāze ir 2, decimālās - 10, heksadecimālās - 16. Tātad, skaitlis tiek datīts ar "sistēmas bāzi" un atlikums tiek ierakstīts iekavās "()". Dalīšana turpinās tiktāl, līdz dalījums ir vienāds ar "0". Jaunās skaitļošanas sistēmas skaitlis tiek pārrakstīts no iekavām no apakšas uz augšu. Skat. piemērus!  
### Dec to Bin:  
**Piemērs**:  
65<sub>10</sub>. : 2 = 32 (1) - LSB  
32<sub>10</sub>. : 2 = 16 (0)  
16<sub>10</sub>. : 2 = 8 (0)  
8<sub>10</sub>. : 2 = 4 (0)  
4<sub>10</sub>. : 2 = 2 (0)  
2<sub>10</sub>. : 2 = 1 (0)  
1<sub>10</sub>. : 2 = 0 (1) - MSB  
Binārais kods = 100 0001<sub>2</sub>  
### Bin to Dec:  
Decimālā skaitļošanas sistēmā ir 10 skaitļi {0, 1, 2, 3, 4, 5, 6, 7, 8, 9} un to kārtas var tikt atzīmētas sekojoši: piem., skaitli 256 var pierakstīt šādi = 2\*10<sup>2</sup> + 5\*10<sup>1</sup> + 6\*10<sup>0</sup> = 256. Tāpat ir arī ar bināriem skaitļiem ar vienu BET! Binārā sistēmā ir tikai divi skaitļi {0, 1}, tādejādi arī kārtas ir nevis 10<sup>pakāpē</sup>, bet gan 2<sup>pakāpē</sup>  
**Piemērs**:  
100 00011<sub>2</sub> = 1\*2<sup>7</sup> + 0\*2<sup>6</sup> + 0\*2<sup>5</sup> + 0\*2<sup>4</sup> + 1\*2<sup>3</sup> + 0\*2<sup>2</sup> + 0\*2<sup>1</sup> + 1\*2<sup>0</sup> = 1+0+0+0+0+0+0+64 = 65<sub>10</sub>  
### Dec to Hex:  


### Hex to Dec:  

### Dec to Oct:  

### Oct to Dec:  




# LINUX
**Katrs simbols ir noteikts pēc ASCII kartes! Respektīvi, vārds "Ram" un "ram" nav viens un tas pats!**  

## Termināls
### Īsceļi (shortcuts)
- **Ctrl+Alt+T** – jauna termināla loga atveršana.  
- **Ctrl+Shift+T** – jauna papildloga atveršana esošajā termināla.  

### Interfeiss  
**user@epk428-2:/home$**:
- **user** – lietotāja vārds;  
- **epk428** – serveris;  
- **2** – darba stacijas numurs;  
- **/home$** – tekošais folderis.  
Ja faila/foldera nosaukums sākas ar ".", tad objekts ir režīmā ***hidden***.  

### Failu detalīzētā skata apraksts
**drwx | r-x | r-x**:
- **d** – direktorija (*Ja defise, tad fails*);
- **r** – read;
- **w** – write;
- **x** – execute;
- **1. kolonna (rwx)** – administrātora tiesības uz objektu;  
- **2. kolonna** – lietotāja tiesības uz objektu;  
- **3. kolonna** – visas pārējās pasaules tiesības uz objektu.  

## Nano redaktors (C valoda)
### Īsceļi (shortcuts)
- **Ctrl+K** – Cut.  
- **Ctrl+U** – Paste.  
### Funkcijas
- **main() {}** – Funkcija main. **()** – vieta argumentam. **{}** – funkcijas izpildošā daļa.  
- **void** – funkcija rezultātu neatgriež.  
### Darbibas simboli printf funkcijai
- **\n** – pāriet uz nākamo rindiņu.  
- **\r** – pāriet rindiņas sākumā.  
- **\t** – tabulācija.  
- **\a** – skaņas simbols.  
- **\'** – apostrofs.  
- **\"** – pēdiņa.  
- **\?** – jautājumzīme.  
- **\\** – sleš.  

## Bash interpretators
### Īsceļi (shortcuts)
- **Ctrl+L** – ekrāna attīrīšana (*Clear screen*).  
- **TAB 2x** – papildina kodu uzrādot iespējamos variantus.  
- **TAB 1x** – papildina kodu ar vienīgo iespējamo variantu.  

### Komandas
**Ir iespējams strādāt ar failiem/folderiem attālināti! Respektīvi nav jāatrodas tai pašā adresē kā fails, lai varētu, piem.: skatīt detalizēti skatu par viņu, rediģēt viņu, pārvietot, dzēst - veikt dajebkādas darbības! Lai pārvietotu folderi no viena uz otru atrodoties trešajā, pirmajam priekšā jāraksta punkts: "./FirstDestination" "/SecondDestination"**  

#### Apraksts par sistēmu
- **whoami** – lietotājs (*kas es esmu?*).  
- **uname** – operētājsistēmas nosaukums.  
- **echo $0** – noklusētā interpretatora nosaukums.  
- **sh** – kompaktā interpretatora izsaukšana.  

#### Failu sistēmas navigācija
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

#### Darbības ar failiem/folderiem
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
- **echo -e "Hello\vWorld"** – izdrukā uz ekrāna *Hello World*. Simbolu virkne "\v" ir darbības simbols, kurš pārnes uz nākamo rindiņu turpmāko saturu tieši zem sevis. T.i., šis nav parasts *Enter*! Sintaksis -e aktivizē papild bibliotēku ar aprakstu par "\v" un citiem elementiem.  

#### Vispārīgi
- **git clone "arguments"** – kopē esošajā folderī visu repozitoriju no github. Argumentā norādīt repozitorija ceļu: https://github.com/MACTEP-ETF/RTR105.  
- **git-upload parametri*** – lai augšuplādētu paveiktos darbus, kā argumentu ierakstīt laiku (*Piem., 20192909_10_10*).  
- **\*** – maska (*Piem., \*.txt*).  
- **firefox** – Firefox palaišana.  
- **man** – dod detalizēts apraksts par tekošu kodu (*Jāpieraksta pirms nepieciešamās komandas*).  
- **history** – parāda uz ekrāna visas veiktās operācijas/komandas.  
- **>** – konveijera simbols. konkrētas informācijas ierakstīšana failā (*Piem., history > File.txt*).  
- **>>** – satura papildināšana. (*Ja fails nav izveidots, tad izveido jaunu. Ja eksistē, tad papildina ar esošu informāciju*)  
- **init 0** – OS Linux shutdown.  

*УНДЭРКОНСТРУКТИОН*  
