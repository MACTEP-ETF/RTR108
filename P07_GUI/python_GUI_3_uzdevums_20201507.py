# -*- coding: utf-8 -*-
"""
Created on Wed Jul 15 15:10:41 2020

@author: Vladimirs Fedorovičs
"""

"""Dialog-Style aplikācijas piemērs."""

import sys

from PyQt5.QtWidgets import QApplication
from PyQt5.QtWidgets import QDialog
from PyQt5.QtWidgets import QDialogButtonBox
from PyQt5.QtWidgets import QFormLayout
from PyQt5.QtWidgets import QLineEdit
from PyQt5.QtWidgets import QVBoxLayout

class Dialog(QDialog):
    """Dialogs."""
    def __init__(self, parent=None):
        """Inicializators."""
        super().__init__(parent)
        self.setWindowTitle('QDialog-Style piemērs')
        self.setGeometry(100, 100, 500, 100)
        dlgLayout = QVBoxLayout()
        formLayout = QFormLayout()
        formLayout.addRow('Vārds, Uzvārds:', QLineEdit())
        formLayout.addRow('Grupa:', QLineEdit())
        formLayout.addRow('Studenta apliecības numurs:', QLineEdit())
        formLayout.addRow('Atzīme Datormācībā:', QLineEdit())
        formLayout.addRow('Piezīmes:', QLineEdit())
        dlgLayout.addLayout(formLayout) #arrange all the widgets on the form
        btns = QDialogButtonBox() #provides a convenient object to place the dialog buttons
        btns.setStandardButtons(
            QDialogButtonBox.Ok | QDialogButtonBox.Cancel)
        dlgLayout.addWidget(btns)
        self.setLayout(dlgLayout)

if __name__ == '__main__':
    app = QApplication(sys.argv)
    dlg = Dialog()
    dlg.show()
    sys.exit(app.exec_())