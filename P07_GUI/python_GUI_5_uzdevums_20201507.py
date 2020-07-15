# -*- coding: utf-8 -*-
"""
Created on Wed Jul 15 16:39:33 2020

@author: Vladimirs Fedorovičs
"""


"""Signals and slots piemērs."""

import sys

from PyQt5.QtWidgets import QApplication
from PyQt5.QtWidgets import QLabel
from PyQt5.QtWidgets import QPushButton
from PyQt5.QtWidgets import QVBoxLayout
from PyQt5.QtWidgets import QWidget

def greeting():
    """Slot function."""
    if msg.text():
        msg.setText("")
    else:
        msg.setText('<html style="font-size:21pt">Sveiki, pasniedzēji!</html>')

app = QApplication(sys.argv)
window = QWidget()
window.setWindowTitle('Signals and slots piemērs')
window.setGeometry(100, 100, 600, 100)
layout = QVBoxLayout()

btn = QPushButton('Ziņa T. Solovjovai un V. Zagoskim')
btn.clicked.connect(greeting)  # Connect clicked to greeting()

layout.addWidget(btn)
msg = QLabel('')
layout.addWidget(msg)
window.setLayout(layout)
window.show()
sys.exit(app.exec_())