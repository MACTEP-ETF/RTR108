# -*- coding: utf-8 -*-
"""
Created on Wed Jul 15 15:41:20 2020

@author: Vladimirs Fedorovičs
"""

"""Main Window-Style aplikācijas piemērs."""

import sys

from PyQt5.QtWidgets import QApplication
from PyQt5.QtWidgets import QLabel
from PyQt5.QtWidgets import QMainWindow
from PyQt5.QtWidgets import QStatusBar
from PyQt5.QtWidgets import QToolBar

class Window(QMainWindow):
    """Main Window."""
    def __init__(self, parent=None):
        """Inicializators."""
        super().__init__(parent)
        self.setWindowTitle('Main Window-Style piemērs (QMainWindow)')
        self.setGeometry(100, 100, 500, 100)
        self.setCentralWidget(QLabel("Šis ir centrālais vidžets"))
        self._createMenu()
        self._createToolBar()
        self._createStatusBar()

    def _createMenu(self):
        self.menu = self.menuBar().addMenu("Izvēlne")
        self.menu.addAction('Iziet (Alt+F4)', self.close)

    def _createToolBar(self):
        tools = QToolBar()
        self.addToolBar(tools)
        tools.addAction('Iziet', self.close)

    def _createStatusBar(self):
        status = QStatusBar()
        status.showMessage("Šeit ir StatusBar")
        self.setStatusBar(status)

if __name__ == '__main__':
    app = QApplication(sys.argv)
    win = Window()
    win.show()
    sys.exit(app.exec_())