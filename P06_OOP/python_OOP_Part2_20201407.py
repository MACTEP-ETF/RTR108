# -*- coding: utf-8 -*-
"""
Created on Tue Jul 14 21:14:42 2020

@author: Vladimirs Fedorovičs
"""
# Part 2 - Object Life cycle (how to create and destroy class objects)

class PartyAnimal:
    x = 0
    
    def __init__(self):
        print('I am constructed')
    
    def party(self):
        self.x = self.x + 1
        print('So far', self.x)
        
    def __del__(self):
        print('I am destructed', self.x)


an = PartyAnimal()
an.party()
an.party()
print('Pirms', type(an))
an = 42

"""
# šajā punktā tiek palaista funkcija __del__, kura izvada uz ekrāna tekstu
'I am destructed' un iznīcina klasi PartyAnimals.
Kā arī, pārveršot 'an' tipu no object uz int.
"""

print('Pēc', type(an))
print('an contains', an)