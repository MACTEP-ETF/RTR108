# -*- coding: utf-8 -*-
"""
Created on Tue Jul 14 20:39:30 2020

@author: Vladimirs Fedorovičs
"""
# Part 1 - a sample class
class PartyAnimal:
    x = 0
    
    def party(self):
        self.x = self.x + 1
        print("So far", self.x)
        
an = PartyAnimal()
an.party()
an.party()
an.party()
PartyAnimal.party(an)

print ("Type", type(an))
print ("Dir ", dir(an))

"""
Iepazinos, kā uztaisīt elementāro klasi un kā apskatīt objekta
iespējamās metodes pēc noklusējuma, kā arī redzēt jauizveidotās metodes. 
"""


# Play with dir() and type()
x = list()
print ("Type", type(x))
print ("Dir ", dir(x))

# Try dir() with a String
y = 'Hello there'
print ("Dir ", dir(y))