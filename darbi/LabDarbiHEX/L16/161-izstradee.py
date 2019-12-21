Python 3.6.9 (default, Nov  7 2019, 10:44:02) 
[GCC 8.3.0] on linux
Type "help", "copyright", "credits" or "license()" for more information.
>>> for i in range(3)
SyntaxError: invalid syntax
>>> for i in range(3):
	print (i)

0
1
2
>>> for i in range(3):
	print (i),

	
0
(None,)
1
(None,)
2
(None,)
>>> for i in range(3):
	print (i,)

	
0
1
2
>>> for i in range(4):
	print (,i)
	
SyntaxError: invalid syntax
>>> for i in range(4):
	print (,i)
	
SyntaxError: invalid syntax
>>> for i in range(4):
	print (i;)
	
SyntaxError: invalid syntax
>>> for i in range(4):
	print (i)

	
0
1
2
3
>>> for i in range(4):
	print (*i)

	
Traceback (most recent call last):
  File "<pyshell#14>", line 2, in <module>
    print (*i)
TypeError: print() argument after * must be an iterable, not int
>>> for i in range(4):
	print (i, end=' ')

	
0 1 2 3 
>>> for i in range(10):
	print (float(i)/20, end=' ')

	
0.0 0.05 0.1 0.15 0.2 0.25 0.3 0.35 0.4 0.45 
>>> for i in range(10):
	print (float(i)/10, end=' ')

	
0.0 0.1 0.2 0.3 0.4 0.5 0.6 0.7 0.8 0.9 
>>> for i in range(10):
	print (float(i)/10, end='\t')

	
0.0	0.1	0.2	0.3	0.4	0.5	0.6	0.7	0.8	0.9	
>>> for i in range(10):
	print (float(i)/10, end=' ')

	
0.0 0.1 0.2 0.3 0.4 0.5 0.6 0.7 0.8 0.9 
>>> print("Ievadiet savu vārdu:")
Ievadiet savu vārdu:
>>> v = raw_input("**")
Traceback (most recent call last):
  File "<pyshell#26>", line 1, in <module>
    v = raw_input("**")
NameError: name 'raw_input' is not defined
>>> v = raw_input('**')
Traceback (most recent call last):
  File "<pyshell#27>", line 1, in <module>
    v = raw_input('**')
NameError: name 'raw_input' is not defined
>>> v = input('**')
**Vladimirs
>>> v
'Vladimirs'
>>> print (v)
Vladimirs
>>> range(5)
range(0, 5)
>>> range(4,9)
range(4, 9)
>>> print (range(4,9))
range(4, 9)
>>> range(5)
range(0, 5)
>>> while v0>0:
	v0 = input("Ievadiet sākotnējo bumbas ātrumu (ar 0 pārtrauksiet ciklu)")
	t = input("Ievadiet laika momentu, kurā tiek novērtēta bumbas atrašanas vieta")
	g = 9.81
	y = v0*t - 0.5*g*t**2
	print("Pēc %g sekundes bumba būs %.2f metru augstumā" %(t,y))

	
Traceback (most recent call last):
  File "<pyshell#41>", line 1, in <module>
    while v0>0:
NameError: name 'v0' is not defined
>>> v0=1
>>> while v0>0:
	v0 = input("Ievadiet sākotnējo bumbas ātrumu (ar 0 pārtrauksiet ciklu)")
	t = input("Ievadiet laika momentu, kurā tiek novērtēta bumbas atrašanas vieta")
	g = 9.81
	y = v0*t - 0.5*g*t**2
	print("Pēc %g sekundes bumba būs %.2f metru augstumā" %(t,y))

	
Ievadiet sākotnējo bumbas ātrumu (ar 0 pārtrauksiet ciklu)0
Ievadiet laika momentu, kurā tiek novērtēta bumbas atrašanas vieta0
Traceback (most recent call last):
  File "<pyshell#44>", line 5, in <module>
    y = v0*t - 0.5*g*t**2
TypeError: can't multiply sequence by non-int of type 'str'
>>> while v0>0:
	v0 = input("Ievadiet sākotnējo bumbas ātrumu: ")
	t = input("Ievadiet laika momentu, kurā tiek novērtēta bumbas atrašanas vieta: ")
	g = 9.81
	y = v0*t - 0.5*g*t**2
	print("Pēc %g sekundes bumba būs %.2f metru augstumā" %(t,y))

	
Traceback (most recent call last):
  File "<pyshell#46>", line 1, in <module>
    while v0>0:
TypeError: '>' not supported between instances of 'str' and 'int'
>>> while k>0:
	v0 = input("Ievadiet sākotnējo bumbas ātrumu: ")
	t = input("Ievadiet laika momentu, kurā tiek novērtēta bumbas atrašanas vieta: ")
	g = 9.81
	y = v0*t - 0.5*g*t**2
	print("Pēc %g sekundes bumba būs %.2f metru augstumā" %(t,y))

	
Traceback (most recent call last):
  File "<pyshell#48>", line 1, in <module>
    while k>0:
NameError: name 'k' is not defined
>>> int k = 1
SyntaxError: invalid syntax
>>> int k
SyntaxError: invalid syntax
>>> int(k)
Traceback (most recent call last):
  File "<pyshell#51>", line 1, in <module>
    int(k)
NameError: name 'k' is not defined
>>> k = 1
>>> int(k)
1
>>> while k>0:
	v0 = input("Ievadiet sākotnējo bumbas ātrumu: ")
	t = input("Ievadiet laika momentu, kurā tiek novērtēta bumbas atrašanas vieta: ")
	g = 9.81
	y = v0*t - 0.5*g*t**2
	print("Pēc %g sekundes bumba būs %.2f metru augstumā" %(t,y))

	
Ievadiet sākotnējo bumbas ātrumu: 12
Ievadiet laika momentu, kurā tiek novērtēta bumbas atrašanas vieta: 2
Traceback (most recent call last):
  File "<pyshell#55>", line 5, in <module>
    y = v0*t - 0.5*g*t**2
TypeError: can't multiply sequence by non-int of type 'str'
>>> 
