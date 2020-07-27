# http.server modulis
1. Lai palaistu moduli, termināla jāieraksta komandrindiņu *python3 -m http.server 8001*. (Cipars 8001 ir ports, var likt arī citu.)  Šī komanda dos piekļuvi visiem failiem un folderiem tekošā foldera ietvaros. Tādēļ, ja ir vēlme par serveri padarīt konkrētu folderi un tā saturu, tad sākumā uz turieni jāaiziet un tikai tad jāpalaiž komandrindiņa.  
2. Šāds saturs ir pārlūkprogrammā, kad ieraksta adreses logā *localhost:8001*:  
![Lokala_piekluve](https://github.com/MACTEP-ETF/RTR108/blob/master/P14_web_service/Links/Lokala_piekluve.PNG)  
3. Lai šis web-serveris būtu pieejams ārpasaulei, ir nepieciešams atvērt papildTabu terminālam un jāpalaiž komandrindiņu *ngrok http 8001*. Pēc komandas izpildīšanas būs redzama adrese, ar kuru varēs pieslēgties web-serverim no ārpasaules:  
![Piekluve_no_arpasaules](https://github.com/MACTEP-ETF/RTR108/blob/master/P14_web_service/Links/Piekluve_no_arpasaules.PNG)  
4. Tiklīdz būs aizvērts šis termināla tabs, tad piekļuve no ārpasaules būs pārtraukta.  
5. Lai ierakstītu visas darbības, kuras tika veiktas ar web-serveri tā darbības laikā, var ierakstīt *log* failā ar pavisam vienkāršu komandrindiņu *script -c "python -m http.server 8001" debug.log*:  
![Log_faila_ieraksts](https://github.com/MACTEP-ETF/RTR108/blob/master/P14_web_service/Links/Log_faila_ieraksts.PNG)  
Tiklīdz serveris būs apturēts, tā log fails būs aizpildīts. Online ieraksts netiek veikts šī veida komandrindiņai.  
