# -*- coding: utf-8 -*-
# Fails: 170.py
# Autors: Vladimirs Fedorovičs
# Apliecības numurs: 041RDB182
# Datums: 24.12.2019
# Sagatave funkcijas saknes meklēšanai ar dihotomijas metodi

from math import cos, fabs
from time import sleep

def f(x):
    return cos(x)

# Definējam argumenta x robežas:
a = -1
b = 1

# Aprēķinam funkcijas vērtības dotajos punktos:
funa = f(a)-1
funb = f(b)-1

# Pārbaudam, vai dotajā intervālā ir saknes:
if ( funa * funb > 0.0 ):
    print ("Dotajā intervālā [%s, %s] sakņu nav" %(a,b))
    sleep(1); exit() # Ziņo uz ekrāna, gaida 1 sec. un darbu pabeidz
else:
    print ("Dotajā intervālā sakne(s) ir!")

# Definējam precizitāti, ar kādu meklēsim sakni:
deltax = 0.01

# Sašaurinam saknes meklēšanas robežas:
while ( fabs(b-a) > deltax ):
    x = (a+b)/2; funx = f(x)-1
    if ( funa*funx < 0. ):
        b = x
    else:
        a = x
print ("Sakne ir: ", (x))
