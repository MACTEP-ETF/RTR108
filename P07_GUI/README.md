# Šis fails tiks papildināts laika gaitā

**Darba uzdevums šai lekcijai**  
Ievietošu tikai rezultātu pēc izmaiņām :)

# Pirmais uzdevums
Manas pirmās GUI aplikācijas kods:
~~~
# -*- coding: utf-8 -*-
"""
Created on Wed Jul 15 03:26:36 2020

@author: Vladimirs Fedorovičs
"""

# GUI - Hello World!

import sys

# 1. Importēju `QApplication` un pārējos nepieciešamos vidžetus
from PyQt5.QtWidgets import QApplication
from PyQt5.QtWidgets import QLabel
from PyQt5.QtWidgets import QWidget

# 2. Izveidoju QApplication instanci
app = QApplication(sys.argv)

# 3. Izveidoju instances priekš savas GUI aplikācijas
window = QWidget()
window.setWindowTitle("Mans pirmais grafiskais objekts PyQt5")
window.setGeometry(100, 100, 450, 100)
# window.move(50, 50)
helloMsg = QLabel("<h1>Esiet sveicināti pasniedzēji!</h1>", parent=window)
helloMsg2 = QLabel("<h2>T. Solovjova un V. Zagorskis</h2>", parent=window)
helloMsg.move(70, 30)
helloMsg2.move(70, 55)

# 4. Attēlo manis izveidoto GUI aplikāciju
window.show()

# 5. Palaiž manas aplikācijas notikumu cilpu (vai galveno cilpu (loop))
sys.exit(app.exec_())
~~~
![Vizualis](https://github.com/MACTEP-ETF/RTR108/blob/master/P07_GUI/PNG/GUI%20-%20Hello%20World!.png)  


## Concepts
- Widgets
- Layout managers
- Dialogs
- Main windows
- Applications
- Event loops
- Signals and slots


## Explanation for methods (pašsaprotamos es neaprakstīšu, tādus kā *.setWindowTitle*, *.show*, *.exec* u.c.)  
- **.setGeometry (100, 100, 500, 500)** –  the first two parameters are the 'x' and 'y' coordinates at which the window will be placed on the screen. The **third** and **fourth** parameters are the **width** and **height** of the window.  
- **.move(50, 50)** – piešķir jebkuram objektam (window, textobject utt.) nobīdi pēc 'x' un 'y' koordinātēm.  



## Vitāli svarīga informācija
 - The PyQt5 ownership model ensures that if you delete a parent (for example, a top-level window), then all of its children (widgets) are automatically deleted as well.  To avoid memory leaks, you should **always make sure that any QWidget object has a parent, with the sole exception of top-level windows**.  




- **X** –
