# -*- coding: UTF-8 -*-
print("\n")
print("Šī programma aprēķina ķermeņa brīvās krišanas traektoriju")
print("Aprēķins tiek realizēts pēc formulas: y=v0*t - (g*t^2)/2, kur:")
print("v0 - sākotnējais bumbas ātrums y ass virzienā")
print("g - brīvās krišanas pāatrinājums (~9.81 m/s^2)")
print("t - izvēlētais laika moments, kurā tiek novērtēta bumbas atrašanās vieta")
print("\nUzdosim paremetrus: v0=5; t=1.\nTātad:")
v0 = 5; g = 9.81; t = 1; y = v0*t - 0.5*g*t**2
print("Pēc %g sekundes bumba būs %.2f metru augstumā" %(t,y))
print("\n++++++++++++++++++++++++++++++++++++++++++\n")
print("Un tagad aprēķināsim pēc jūsu datiem. Lūdzu ievadiet:")
v0 = input("v0 = ")
t = input("t = ")
y = v0*t - 0.5*g*t**2
print("\nRezultātā:")
print("Pēc %g sekundes bumba būs %.2f metru augstumā" %(t,y))
