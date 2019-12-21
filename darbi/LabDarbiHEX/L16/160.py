#!/usr/bin/python
# -*- coding: UTF-8 -*-
v0 = 5; g = 9.81; t = 1; y = v0*t - 0.5*g*t**2
print("Pēc %g sekundes bumba būs %.2f metru augstumā \n" %(t,y))
print("Aprēķins tiek realizēts izmantojot formulu par ķermeņa brīvās krišanas trajektoriju. y=v0*t - (g*t^2)/2, kur:")
print("v0 - sākotnējais bumbas ātrums y ass virzienā")
print("g - brīvās krišanas pāatrinājums (~9.81 m/s^2)")
print("t - izvēlētais laika moments, kurā tiek novērtēta bumbas atrašanās vieta")
