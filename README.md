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

# LINUX
## Termināls
### Interfeiss  
**user@epk428-2:/home$**:
- **user** – lietotāja vārds;  
- **epk428** – serveris;  
- **2** – darba stacijas numurs;  
- **/home$** – tekošais folderis.  
Ja objekta nosaukums sākas ar ".", tad objekts ir režīmā ***hidden***.

### Īsceļi (shortcuts)
- **Ctrl+Alt+T** – jauna termināla loga atveršana.  
- **Ctrl+Shift+T** – jauna papildloga atveršana esošajā termināla.  

## Bash interpretators
### Īsceļi (shortcuts)
- **Ctrl+L** – ekrāna attīrīšana (*Clear screen*).  
- **TAB 2x** – papildina kodu uzrādot iespējamos variantus.  
- **TAB 1x** – papildina kodu ar vienīgo iespējamo variantu.  

### Komandas
#### Apraksts par sistēmu
- **whoami** – lietotājs (*kas es esmu?*).  
- **uname** – operētājsistēmas nosaukums.  
- **echo $0** – noklusētā interpretatora nosaukums.  
- **sh** – kompaktā interpretatora izsaukšana.  

#### Failu sistēmas navigācija
- **cd .** – norāde/solis uz vietas (*relatīvā adresācija*).  
- **cd ..** – norāde/solis līmeni augstāk.  
- **~$** – mājas apgabals.  
- **/** – saknes apgabals.  
- **cd /home** – pāreja uz konkrētu adresi (folderi).  
- **pwd** – parāda kāda ir adrese tekošam folderim (*kur es esmu?*).  
- **ls** – parāda kas atrodas tekošā folderī (*kas man ir pieejams*).  
- **ls -a** – parādā visus objektus (tai skaitā *hidden files*).  
- **ls -l** – tekošā foldera detalizēts skats. (Piem., **drwx | r-x | r-x**, kur "d" – direktorija; "r" – read; "w" – write; "x" – execute. 1. kolonna - administrātora tiesības; 2. kolonna - lietotāja tiesības; 3. kolonna - visas pārējās pasaules tiesības).  

#### Darbības ar failiem
- **echo** – printēt uz ekrāna tekstu (*Piem., echo Hello World*):  
- Izmantojot kopā ar > tiks ierakstīt failā:  
**a**.) Ja fails neeksistē, tad izveido jaunu;
**b**.) Ja fails eksistē, tad pārraksta (dzēšot veco saturu);

- **touch** – izveidot jaunu failu.  
- **cp** – kopēt failu (*No - uz*).  
- **mv** – pārvietot failu (*No - uz. Kā arī pārsaukt tekošu, ja destinācija (gala mērķis) ir tas pats folderis*).  
- **rm** – izdzēst vienību (*Izdēst kopu ar atbilstošu masku (\*)*).  

#### Vispārīgi
- **\*** – maska (*Piem., \*.txt*).  
- **firefox** – Firefox palaišana.  
- **man** – dod detalizēts apraksts par tekošu kodu (*Jāpieraksta pirms nepieciešamās komandas*).  
- **history** – parāda uz ekrāna visas veiktās operācijas/komandas.  
- **>** – konveijera simbols. konkrētas informācijas ierakstīšana failā (*Piem., history > File.txt*).  
- **>>** – satura papildināšana. (*Ja fails nav izveidots, tad izveido jaunu. Ja eksistē, tad papildina ar esošu informāciju*)  
- **init 0** – OS Linux shutdown.  

*УНДЭРКОНСТРУКТИОН*  
