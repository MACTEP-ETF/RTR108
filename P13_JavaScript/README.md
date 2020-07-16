# JavaScript valodas apraksts
##### Piezīmes
- Aprakstā izmantoju divas valodas: gan latviešu, gan angļu.  
- Pašas primitīvākās fnkcijas un metodes neaprakstīju.  
- Šajā valodā nav obligāti jādefinē konkrētu datu tipu aprakstot mainīgu. izmanto **var**. Bet ja ir konkrēts gadījums, tad protams definē konkrēto.  
- **CaseSensitive language for methods!**

## Some Data types
- **number** – integer, float utt.  
- **string** – tā pat ka C valodā (*Piem., var name = "Vladimirs"*).  
- **object** – datu struktūra (Tāpat kā *struct* C++).  

## Regular functions and expressions
- **alert()** – display the result in an alert box (Same as *print()* in C).  
- **function myFunction () { *code*; }** – funkcijas apraksta struktūra.  
- **var myObject = { variable: value, variable: value };** – objekta apraksta struktūra.  
- **function.person** – piekļuve pie *object/function* elementa caur ".", tāpat kā C#, Python.  

### String Methods
- **txt.length** – iegūstam mainīgā "txt" garumu (C valodā mēs piekļūtu ar *length(txt)*).  
- **txt.indexOf("something")** – atrod pozīciju ar kuru sākas pirmais "something" mainīgajā *txt* (*Piem., var txt = "Is there something broken?". vārds something sākās ar 9 pozīciju, jo pirmā pozīcija ir "0"*).  
- **txt.lastIndexOf("something")** – sāk meklēšanu no beigām. Ja ir **("something", 15)** , tad tā būs norāde, ar kuru pozīciju sākt meklēt un virzīties uz sākumu.  
- **txt.replace** – aizvieto konkrēto kopu ar citu.  
- **txt.search("something")** – atrod konkrēto vērtību mainīgajā *txt*. Atšķirībā no *.indexOf*, šajā metodē ir iekļauts spēcīgs rīks – **Regular Expresions**   
- **var x = txt.slice(1, 5)** – nogriež mainīgā *txt* vērtību dotā diapazonā un piešķir *x* mainīgajam (**NB! Nemaina mainīgā *txt* saturu!**).  

### Array Methods  
- **fruits.pop()** – izņem no masīva pēdējo elementu.  
- **fruits.push("Kiwi")** – pievieno jaunu elementu "Kiwi" masīvam (kā pēdējo).  
- **fruits.splice(1,2)** – izmet no masīva konkrētos elementus.  
- **fruits.sort()** – pārkārto masīva elementus alfabēta secībā. 

### Date Objects
- **new Date()** – izveido jaunu datuma objektu ar pašreizējo datumu un laiku (sistēmas laiku).  
- **d.getFullYear()** – extract the year (four digits) out of a date object.  
- **d.setFullYear(2020)** – Vārds *set* jau visu paskaidro.   
- **d.getMonth()** – extract the months (0-11).  
- **var d = new Date()** parametru ievade iekavās:  
  - **6** cipari atdalīti ar komatu – gads, mēnesis, diena, stunda, minūte, sekunde.  
  - **5** cipari – gads, mēnesis, diena, stunda, minūte.  
  - **4** cipari – gads, mēnesis, diena, stunda.  
  - **3** cipari – gads, mēnesis, diena.  
  - **2** cipari – gads, mēnesis.  
  - **1** cipars – **NB! viens cipars reprezentē milisekundes!**  

### Math Object (Math.) 
#### Dažas pamata metodes
- **Math.round** – standarta noapaļošana.
- **Math.floor** – noapaļo uz leju, pat ja ir veseli 3,9.  
- **Math.ceil** – noapaļo uz augšu, pat ja ir tikai 3,1.  
- **Math.abs** – modulis no vērtības.  
- **Math.random** – gadījuma skaitlis.  
Papild aprakstus var gūt [šeit](https://www.w3schools.com/js/js_math.asp).  

### Loops
- **For loop** – ir abi veidi: gan parastais C valodas, gan Python.  

### HTML DOM - Changing HTML
- **\<button onClick="alert('Hello')">Click me.\</button>** – onClick funkcija pogai. 
- **document.write()** – can be used to write directly to the HTML output stream.  
  **NB!** Never use *document.write()* after the document is loaded. **It will overwrite the document**.
- **document.getElementById(id).innerHTML = new HTML** – to change the content of an HTML element.  
- **document.getElementsByTagName("P")\[0\].innerHTML = "Hello World!"** – change the HTML content of the first <p> element (index 0) in the document.  
- **document.getElementById(id).attribute = new value** –
- **X** –
- **X** –
- **X** –
- **X** –
