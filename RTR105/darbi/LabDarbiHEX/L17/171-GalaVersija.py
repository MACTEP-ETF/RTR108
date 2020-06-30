# -*- coding: utf-8 -*-
# Fails: 170.py
# Autors: Vladimirs Fedorovičs
# Apliecības numurs: 041RDB182
# Datums: 25.12.2019
# Funkcijas cos(x)=0 saknes meklēšana ar dihotomijas metodi

from math import cos, fabs
from time import sleep
def f(x):
    return cos(x)

# Lietotājs definējam argumenta x robežas:
print("Lūdzu, ievadiet argumenta x robežas [a, b]")
a = input("a = ")
b = input("b = ")

# Aprēķinam funkcijas vērtības dotajos punktos:
funa = f(a)
funb = f(b)

# Pārbaudam, vai dotajā intervālā ir saknes:
if ( funa * funb > 0.0 ):
    print ("Dotajā intervālā [%s, %s] sakņu nav" %(a,b))
    sleep(1); exit() # Ziņo uz ekrāna, gaida 1 sec. un darbu pabeidz
else:
    print ("Dotajā intervālā sakne(s) ir! Bet programma uzrādīs vienu no divām iespejamām (kompleksā programma ir gatava 2.LabDarba - roots ietvaros)")

# Definējam precizitāti, ar kādu meklēsim sakni:
deltax = 0.0001
k = 0
# Sašaurinam saknes meklēšanas robežas:
while ( fabs(b-a) > deltax ):
    k=k+1
    x = (a+b)/2.; funx = f(x)
    if ( funa*funx < 0. ):
        b = x
    else:
        a = x
y=f(x)
print ("x = %f. f(x) = %f. Iterāciju skaits, k = %d\n" %(x,y,k))
