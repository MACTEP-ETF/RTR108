# -*- coding: utf-8 -*-
"""
Created on Wed Jul 15 04:31:51 2020

@author: Vladimirs Fedorovičs
"""


"""Horizontāla izkārtojuma piemērs."""

import sys

from PyQt5.QtWidgets import QApplication
from PyQt5.QtWidgets import QHBoxLayout
from PyQt5.QtWidgets import QPushButton
from PyQt5.QtWidgets import QWidget

app = QApplication(sys.argv)
window = QWidget()
window.setWindowTitle("Horizontāla izkārtojuma piemērs (QHBoxLayout)")
window.setGeometry(100, 100, 600, 30)
layout = QHBoxLayout()
layout.addWidget(QPushButton("Kreisā puse"))
layout.addWidget(QPushButton("Centrs"))
layout.addWidget(QPushButton("Labā puse"))
window.setLayout(layout)
window.show()
sys.exit(app.exec_())


