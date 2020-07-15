# -*- coding: utf-8 -*-
"""
Created on Tue Jul 14 21:14:42 2020

@author: Vladimirs Fedorovičs
"""

# Part 3 - Multiple instances of the same class sitting in different variables

class PartyAnimal:
    x = 0
    name = ""
    
    def __init__(self, z):
        self.name = z
        print(self.name, "constructed")
    
    def party(self):
        self.x = self.x + 1
        print(self.name, "party count", self.x)
        
s = PartyAnimal("Sally")
s.party()

j = PartyAnimal("Jim")
j.party()
s.party()

"""
# Šeit tiek izveidotas divas instances "s" un "j" kuras ir neatkarīgas
savā starpā. Respektīvi, nenorāda uz vienu vietu adresē – nav pointeri,
bet gan tie glabā sevī kopiju no klases PartyAnimal.
"""
print("\nVai mainīgie 's' un 'j' ir vienādi: ", s is j)
print("'s' ir:", type(s), "tips")
print("'j' ir:", type(j), "tips")
