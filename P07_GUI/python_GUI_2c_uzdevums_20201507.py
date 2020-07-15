# -*- coding: utf-8 -*-
"""
Created on Wed Jul 15 13:48:01 2020

@author: Vladimirs Fedorovičs
"""


"""Sietveida izkārtojuma piemērs."""

import sys

from PyQt5.QtWidgets import QApplication
from PyQt5.QtWidgets import QGridLayout
from PyQt5.QtWidgets import QPushButton
from PyQt5.QtWidgets import QWidget

app = QApplication(sys.argv)
window = QWidget()
window.setWindowTitle("Sietveida izkārtojuma piemērs (QGridLayout)")
window.setGeometry(100, 100, 600, 100)
layout = QGridLayout()
layout.addWidget(QPushButton('Poga (0, 0)'), 0, 0)
layout.addWidget(QPushButton('Poga (0, 1)'), 0, 1)
layout.addWidget(QPushButton('Poga (0, 2)'), 0, 2)
layout.addWidget(QPushButton('Poga (1, 0)'), 1, 0)
layout.addWidget(QPushButton('Poga (1, 1)'), 1, 1)
layout.addWidget(QPushButton('Poga (1, 2)'), 1, 2)
layout.addWidget(QPushButton('Poga (2, 0)'), 2, 0)
layout.addWidget(QPushButton('Poga (2, 1) + (2, 2) – tiek apvienotas divas kolonnas'), 2, 1, 1, 2)
window.setLayout(layout)
window.show()
sys.exit(app.exec_())
