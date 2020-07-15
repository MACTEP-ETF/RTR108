# -*- coding: utf-8 -*-
"""
Created on Wed Jul 15 02:01:48 2020

@author: Vladimirs Fedorovičs
"""
# Part 3 - Inheritance

class PartyAnimal:
    x = 0
    name = ""
    
    def __init__(self, nam):
        self.name = nam
        print(self.name, "constructed")
    
    def party(self):
        self.x = self.x + 1
        print(self.name, "party count", self.x)
        
class FootballFan(PartyAnimal):
    points = 0
    def touchdown(self):
        self.points = self.points + 7
        self.party()
        print(self.name, "points", self.points)


s = PartyAnimal("Sally")
s.party()

j = FootballFan("Jim")
j.party()
j.touchdown()

"""
# Šeit, klase PartyAnimal tiek papildināta ar vēl vienu klasi FootballFan, 
kura tiek izpildīta tikai tādā gadījumā, ja tiek izsaukta. 
Kā arī, iekš FootballFan klases ir papild norāde uz pamatklases metodi "party".
"""




