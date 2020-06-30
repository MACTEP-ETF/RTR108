# -*- coding: UTF-8 -*-
# Fails: 190_1UN2_kartasAtv.py
# Autors: Vladimirs Fedorovičs
# Apliecības numurs: 041RDB182
# Datums: 25.12.2019
# Funkcijas sin(x)=0 aprēķins x intervālā [-2;2] ar deltax = 0.01.
# Kā arī tās 1. kārtas atvasinājuma aprēķins, 
# izmantojot 'forward difference' metodi.

from math import sin
def f(x):
	return sin(x)

# definēsim intervālu un deltaH
a = x0 = -2
b = 2
deltaH = 0.01

# izveidosim un atvērsim DAT failu aprēķinu ierakstam
datu_fails = open("90.dat", "w")

# ierakstīsim failā nosaukumus kolonnām
datu_fails.write("# x\t\tFun(x)\tFunAtv1(x)\n")

# aprēķināsim f(x) un fAtv(x) katram punktam un izvadīsim uz ekrāna
while(x0<b):
        Funx = f(x0)
        FunD = f(x0 + deltaH)
        FunAtv1 = (FunD - Funx)/deltaH
        datu_fails.write("%f\t%f\t%f\n" %(x0,Funx,FunAtv1))
        x0 = x0 + deltaH
datu_fails.close()
