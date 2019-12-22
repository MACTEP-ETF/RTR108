# -*- coding: UTF-8 -*-
print("\nŠī programma aprēķina ķermeņa brīvās krišanas traektoriju")
print("Aprēķins tiek realizēts pēc formulas: y=v0*t - (g*t^2)/2, kur:")
print("v0 - sākotnējais bumbas ātrums y ass virzienā")
print("g - brīvās krišanas pāatrinājums (~9.81 m/s^2)")
print("t - izvēlētais laika moments, kurā tiek novērtēta bumbas atrašanās vieta\n")
v0 = input("Lūdzu, ievadiet sākotnējo bumbas ātrumu: ")
t = input("Ievadiet laika momentu, kurā tiek novērtēta bumbas atrašanas vieta: ")
g = 9.81
y = v0*t - 0.5*g*t**2
print("Pēc %g sekundes bumba būs %.2f metru augstumā" %(t,y))
