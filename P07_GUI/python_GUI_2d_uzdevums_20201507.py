# -*- coding: utf-8 -*-
"""
Created on Wed Jul 15 14:27:01 2020

@author: Vladimirs Fedorovičs
"""


"""Formas veida (ierakstīt, atķeksēt, izvēlēties izvēlnē utt.) izkārtojuma piemērs."""

import sys

from PyQt5.QtWidgets import QApplication
from PyQt5.QtWidgets import QFormLayout
from PyQt5.QtWidgets import QLineEdit
from PyQt5.QtWidgets import QWidget

app = QApplication(sys.argv)
window = QWidget()
window.setWindowTitle("Formas veida izkārtojuma piemērs (QFormLayout)")
window.setGeometry(100, 100, 500, 100)
layout = QFormLayout()
layout.addRow('Vārds, Uzvārds:', QLineEdit())
layout.addRow('Grupa:', QLineEdit())
layout.addRow('Studenta apliecības numurs:', QLineEdit())
layout.addRow('Atzīme Datormācībā:', QLineEdit())
layout.addRow('Piezīmes:', QLineEdit())
window.setLayout(layout)
window.show()
sys.exit(app.exec_())