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


