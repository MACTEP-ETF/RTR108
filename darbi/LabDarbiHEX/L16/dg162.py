Python 3.6.9 (default, Nov  7 2019, 10:44:02) 
[GCC 8.3.0] on linux
Type "help", "copyright", "credits" or "license()" for more information.
>>> 
fdff
Traceback (most recent call last):
  File "<pyshell#0>", line 2, in <module>
    fdff
NameError: name 'fdff' is not defined
>>> v0 = 0
>>> v0 = 0 #sākotnēji bumba atrodas miera stāvoklī
>>> t = 0.1 #laiks no bumbas atlaišanas brīža ir tikai 0.1 sekunde
>>> y = v0*t - 0.5*g*t**2 #aprēķinātā bumbas pozīcija uz y ass
Traceback (most recent call last):
  File "<pyshell#4>", line 1, in <module>
    y = v0*t - 0.5*g*t**2 #aprēķinātā bumbas pozīcija uz y ass
NameError: name 'g' is not defined
>>> g = 9.81
>>> y = v0*t - 0.5*g*t**2 #aprēķinātā bumbas pozīcija uz y ass
>>> print y #iegūstam rezultātu uz ekrāna
SyntaxError: Missing parentheses in call to 'print'. Did you mean print(y #iegūstam rezultātu uz ekrāna)?
>>> print 7
									
SyntaxError: Missing parentheses in call to 'print'. Did you mean print(7)?
>>> print y
									
SyntaxError: Missing parentheses in call to 'print'. Did you mean print(y)?
>>> print(y)
									
-0.04905000000000001
>>> #Kā redzam, bumba ir nedaudz iestrēgusi zemē
									
>>> #Jauns bumbas metiens
									
>>> v0 = 5
									
>>> v0 = 5 # Bumba tiek pamesta gaisā ar ātrumu 5 m/s
									
>>> t = 0.7 # kas notiks pēc 0.7 sekundēm?
									
>>> y = v0*t - 0.5*g*t**2
									
>>> print(y)
									
1.0965500000000001
>>> # Bumba vēl nav nokritusi zemē (atrodas 1.1 m augstumā)
									
>>> 

>>> v0 = 5; t = 1; y = v0*t - 0.5*g*t**2
									
>>> print 'Pēc %g sekundes bumba būs %.2f metru augstumā \n' % (t,y)
									
SyntaxError: invalid syntax
>>> print 'Pēc %g sekundes bumba būs %.2f metru augstumā \n % (t,y)
									
SyntaxError: EOL while scanning string literal
>>> print "Pēc %g sekundes bumba būs %.2f metru augstumā \n" % (t,y)
									
SyntaxError: invalid syntax
>>> print "Pēc %g sekundes bumba būs %.2f metru augstumā \n" % (t,y)
									
SyntaxError: invalid syntax
>>> print 'Pēc %g sekundes bumba būs %.2f metru augstumā' '\n' % (t,y)
									
SyntaxError: invalid syntax
>>> print 'Pēc %g sekundes bumba būs %.2f metru augstumā \n' % (t,y)
									
SyntaxError: invalid syntax
>>> print 'Pēc %g sekundes bumba būs %.2f metru augstumā \n' (t,y)
									
SyntaxError: invalid syntax
>>> print 'Pēc %g sekundes bumba būs %.2f metru augstumā \n (t,y)
									
SyntaxError: EOL while scanning string literal
>>> print 'Pēc %g sekundes bumba būs %.2f metru augstumā \n (t,y)'
									
SyntaxError: invalid syntax
>>> print 'Pēc %g sekundes bumba būs %.2f metru augstumā \n" (t,y)
									
SyntaxError: EOL while scanning string literal
>>> print 'Pēc %g sekundes bumba būs %.2f metru augstumā \n" (t,y)
									
SyntaxError: EOL while scanning string literal
>>> print 'Pēc %g sekundes bumba būs %.2f metru augstumā \n' % (t,y)
									
SyntaxError: invalid syntax
>>> print ("Pēc %g sekundes bumba būs %.2f metru augstumā \n" % t,y)
									
Traceback (most recent call last):
  File "<pyshell#33>", line 1, in <module>
    print ("Pēc %g sekundes bumba būs %.2f metru augstumā \n" % t,y)
TypeError: not enough arguments for format string
>>> print ("Pēc %g sekundes bumba būs %.2f metru augstumā \n" % t,y)
									
Traceback (most recent call last):
  File "<pyshell#34>", line 1, in <module>
    print ("Pēc %g sekundes bumba būs %.2f metru augstumā \n" % t,y)
TypeError: not enough arguments for format string
>>> print ("Pēc %g sekundes bumba būs %.2f metru augstumā \n" t,y)
									
SyntaxError: invalid syntax
>>> print ("Pēc %g sekundes bumba būs %.2f metru augstumā \n", t,y)
									
Pēc %g sekundes bumba būs %.2f metru augstumā 
 1 0.09499999999999975
>>> print ("Pēc %g sekundes bumba būs %.2f metru augstumā \n",% t,y)
									
SyntaxError: invalid syntax
>>> print ("Pēc %g sekundes bumba būs %.2f metru augstumā \n"%,t,y)
									
SyntaxError: invalid syntax
>>> print ("Pēc %g sekundes bumba būs %.2f metru augstumā \n" t,y)
									
SyntaxError: invalid syntax
>>> print ("Pēc %g sekundes bumba būs %.2f metru augstumā \n" .t,y)
									
Traceback (most recent call last):
  File "<pyshell#40>", line 1, in <module>
    print ("Pēc %g sekundes bumba būs %.2f metru augstumā \n" .t,y)
AttributeError: 'str' object has no attribute 't'
>>> print ("Pēc %g sekundes bumba būs %.2f metru augstumā \n" .t,y)
									
Traceback (most recent call last):
  File "<pyshell#41>", line 1, in <module>
    print ("Pēc %g sekundes bumba būs %.2f metru augstumā \n" .t,y)
AttributeError: 'str' object has no attribute 't'
>>> print ("Pēc %g sekundes bumba būs %.2f metru augstumā \n" t,y)
									
SyntaxError: invalid syntax
>>> print ("Pēc %g sekundes bumba būs %.2f metru augstumā \n"t,y)
									
SyntaxError: invalid syntax
>>> print ("Pēc %g sekundes bumba būs %.2f metru augstumā \n",t,y)
									
Pēc %g sekundes bumba būs %.2f metru augstumā 
 1 0.09499999999999975
>>> print "Pēc %g sekundes bumba būs %.2f metru augstumā \n" (t,y)
									
SyntaxError: invalid syntax
>>> print "Pēc %g sekundes bumba būs %.2f metru augstumā" (t,y)
									
SyntaxError: invalid syntax
>>> print "Pēc %g sekundes bumba būs %.2f metru augstumā" %(t,y)
									
SyntaxError: invalid syntax
>>> print "Pēc %g sekundes bumba būs %.2f metru augstumā"
									
SyntaxError: Missing parentheses in call to 'print'. Did you mean print("Pēc %g sekundes bumba būs %.2f metru augstumā")?
>>> print (t,y) % "Pēc %g sekundes bumba būs %.2f metru augstumā"
									
1 0.09499999999999975
Traceback (most recent call last):
  File "<pyshell#49>", line 1, in <module>
    print (t,y) % "Pēc %g sekundes bumba būs %.2f metru augstumā"
TypeError: unsupported operand type(s) for %: 'NoneType' and 'str'
>>> print (t,y) "Pēc %g sekundes bumba būs %.2f metru augstumā"%
									
SyntaxError: invalid syntax
>>> print (t,y) "Pēc %g sekundes bumba būs %.2f metru augstumā"
									
SyntaxError: invalid syntax
>>> print (t,y) "Pēc %g sekundes bumba būs %.2f metru augstumā
									
SyntaxError: EOL while scanning string literal
>>> print (t,y) "Pēc %g sekundes bumba būs %.2f metru augstumā
									
SyntaxError: EOL while scanning string literal
>>> print (t,y) Pēc %g sekundes bumba būs %.2f metru augstumā
									
SyntaxError: invalid syntax
>>> print (t,y) 'Pēc %g sekundes bumba būs %.2f metru augstumā'
									
SyntaxError: invalid syntax
>>> print (t,y) ('Pēc %g sekundes bumba būs %.2f metru augstumā')
									
1 0.09499999999999975
Traceback (most recent call last):
  File "<pyshell#56>", line 1, in <module>
    print (t,y) ('Pēc %g sekundes bumba būs %.2f metru augstumā')
TypeError: 'NoneType' object is not callable
>>> print ('Pēc %g sekundes bumba būs %.2f metru augstumā') (t,y)
									
Pēc %g sekundes bumba būs %.2f metru augstumā
Traceback (most recent call last):
  File "<pyshell#57>", line 1, in <module>
    print ('Pēc %g sekundes bumba būs %.2f metru augstumā') (t,y)
TypeError: 'NoneType' object is not callable
>>> print ('Pēc %g sekundes bumba būs %.2f metru augstumā') t,y
									
SyntaxError: invalid syntax
>>> print 'Pēc %g sekundes bumba būs %.2f metru augstumā', (t,y)
									
SyntaxError: invalid syntax
>>> print 'Pēc %g sekundes bumba būs %.2f metru augstumā", (t,y)
									
SyntaxError: EOL while scanning string literal
>>> print "Pēc %g sekundes bumba būs %.2f metru augstumā", (t,y)
									
SyntaxError: invalid syntax
>>> print "Pēc {%g} sekundes bumba būs {%.2f) metru augstumā", (t,y)
									
SyntaxError: invalid syntax
>>> print "Pēc {%g} sekundes bumba būs {%.2f) metru augstumā",t,y
									
SyntaxError: Missing parentheses in call to 'print'. Did you mean print("Pēc {%g} sekundes bumba būs {%.2f) metru augstumā",t,y)?
>>> print ("Pēc {%g} sekundes bumba būs {%.2f) metru augstumā",t,y)
									
Pēc {%g} sekundes bumba būs {%.2f) metru augstumā 1 0.09499999999999975
>>> print ("Pēc {} sekundes bumba būs {) metru augstumā \n",t,y)
									
Pēc {} sekundes bumba būs {) metru augstumā 
 1 0.09499999999999975
>>> print ("Pēc {t} sekundes bumba būs {y) metru augstumā \n")
									
Pēc {t} sekundes bumba būs {y) metru augstumā 

>>> print ("Pēc" {t} "sekundes bumba būs {y) metru augstumā \n")
									
SyntaxError: invalid syntax
>>> print ("Pēc" %gt "sekundes bumba būs {y) metru augstumā \n")
									
SyntaxError: invalid syntax
>>> print ("Pēc" %gt "sekundes bumba būs" y "metru augstumā \n")
									
SyntaxError: invalid syntax
>>> print ("Pēc" %gt "sekundes bumba būs" %.2fy "metru augstumā \n")
									
SyntaxError: invalid syntax
>>> print ("Pēc" %gt 'sekundes bumba būs' %.2fy "metru augstumā \n")
									
SyntaxError: invalid syntax
>>> print ("Pēc" %gt 'sekundes bumba būs %.2fy "metru augstumā \n")
	   
SyntaxError: EOL while scanning string literal
>>> print ("Pēc" %gt 'sekundes bumba būs %.2fy "metru augstumā \n')
	   
SyntaxError: invalid syntax
>>> print ('Pēc' + %g + t+ 'sekundes bumba būs %.2fy "metru augstumā \n')
	   
SyntaxError: invalid syntax
>>> print ('Pēc' + t+ 'sekundes bumba būs %.2fy "metru augstumā \n')
	   
Traceback (most recent call last):
  File "<pyshell#75>", line 1, in <module>
    print ('Pēc' + t+ 'sekundes bumba būs %.2fy "metru augstumā \n')
TypeError: must be str, not int
>>> print ('Pēc' t 'sekundes bumba būs %.2fy "metru augstumā \n')
	   
SyntaxError: invalid syntax
>>> 
