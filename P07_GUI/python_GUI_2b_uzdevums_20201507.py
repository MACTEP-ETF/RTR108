# -*- coding: utf-8 -*-
"""
Created on Wed Jul 15 13:37:51 2020

@author: Vladimirs Fedorovičs
"""



"""Vertikāla izkārtojuma piemērs."""

import sys

from PyQt5.QtWidgets import QApplication
from PyQt5.QtWidgets import QVBoxLayout
from PyQt5.QtWidgets import QPushButton
from PyQt5.QtWidgets import QWidget

app = QApplication(sys.argv)
window = QWidget()
window.setWindowTitle("Vertikāla izkārtojuma piemērs (QVBoxLayout)")
window.setGeometry(100, 100, 600, 70)
layout = QVBoxLayout()
layout.addWidget(QPushButton("Augša"))
layout.addWidget(QPushButton("Centrs"))
layout.addWidget(QPushButton("Apakša"))
window.setLayout(layout)
window.show()
sys.exit(app.exec_())


