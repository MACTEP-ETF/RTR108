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
- **ls -al** – tekošā foldera detalizēts skats. (Piem., **drwxr-xr-x**, kur "d" – direktorija; "r" – read; "w" – write; "x" – execute).  
#### Darbības ar failiem
- **cp** – kopēt failu (*No - uz*).  
- **\*** – maska (\*.txt).  
#### Vispārīgi
- **firefox** – Firefox palaišana.  
- **man** – dod detalizēts apraksts par tekošu kodu (*Jāpieraksta pirms nepieciešamās komandas*).  
- **history** – parāda uz ekrāna visas veiktās operācijas/komandas.  
- **>** – konveijera simbols. konkrētas informācijas ierakstīšana failā (*Piem., history > File.txt*).  
- **>>** – satura papildināšana. (*Ja fails nav izveidots, tad izveido jaunu. Ja eksistē, tad papildina ar esošu informāciju*)  
- **init 0** – OS Linux shutdown.  

*УНДЭРКОНСТРУКТИОН*  
