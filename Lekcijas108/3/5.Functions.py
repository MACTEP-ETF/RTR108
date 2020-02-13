Python 3.6.8 (default, Jan 14 2019, 11:02:34) 
[GCC 8.0.1 20180414 (experimental) [trunk revision 259383]] on linux
Type "help", "copyright", "credits" or "license()" for more information.
>>> type(32)
<class 'int'>
>>> max('Kas te notiek') # atrod char ar lielāko vērtību un izvada uz ekrāna
't'
>>> min('Kas te notiek') # atrod char ar mazāko vērtību un izvada uz ekrāna
' '
>>> len('Kas te notiek') # izvada uz ekrāna string garumu
13
>>> int(3.9999)
3
>>> int(-2.3)
-2
>>> float(32)
32.0
>>> float('3.14159')
3.14159
>>> float('Hello')
Traceback (most recent call last):
  File "<pyshell#8>", line 1, in <module>
    float('Hello')
ValueError: could not convert string to float: 'Hello'
>>> import math
>>> print(math)
<module 'math' (built-in)>
>>> signal_power = 10
>>> noise_power = 12
>>> ratio = signal_power / noise_power
>>> decibels = 10 * math.log10(ratio)

>>> radians = 0.7

>>> height = math.sin(radians)
>>> print(decibels)
-0.7918124604762482
>>> print(height)
0.644217687237691
>>> degrees = 45
>>> radians = degrees / 360.0 * 2 * math.pi

>>> math.sin(radians)
0.7071067811865475
>>> math.sqrt(2) / 2.0

0.7071067811865476
>>> min(123456789)
Traceback (most recent call last):
  File "<pyshell#23>", line 1, in <module>
    min(123456789)
TypeError: 'int' object is not iterable
>>> min('123456789')
'1'
>>> x = 5
>>> y = 7
>>> min(xy)
Traceback (most recent call last):
  File "<pyshell#27>", line 1, in <module>
    min(xy)
NameError: name 'xy' is not defined
>>> min(x,y)
5
>>> max(x,y)
7
>>> min(1 2 3 4 5 6 7 8 9)
SyntaxError: invalid syntax
>>> min(12,123456789)
12
>>> random
Traceback (most recent call last):
  File "<pyshell#32>", line 1, in <module>
    random
NameError: name 'random' is not defined
>>> import random
>>> for i in range(10):
	x = random.random()
	print (x)

	
0.17244430929957466
0.3496809560617292
0.817205861945552
0.024123323400739305
0.047277722493531904
0.08660626794976467
0.624673836807171
0.28769977601626817
0.6210477072870954
0.6484778175752159
>>> random(5)
Traceback (most recent call last):
  File "<pyshell#38>", line 1, in <module>
    random(5)
TypeError: 'module' object is not callable
>>> random.randint(5, 10)
8
>>> t = [1, 2, 3]

>>> random.choice(t)

2
>>> random.choice(t)
3
>>> random.choice(t)
1
>>> random.choice(t)
2
>>> random.choice(t)
1
>>> random.choice(t)
3
>>> random.choice(t)
2
>>> def print_lyrics():
	print("I'm a lumberjack, and I'm okay.")
	print('I sleep all night and I work all day.')

	
>>> print(print_lyrics)

<function print_lyrics at 0x7fce35ddb488>
>>> print(type(print_lyrics))

<class 'function'>
>>> print_lyrics()

I'm a lumberjack, and I'm okay.
I sleep all night and I work all day.
>>> 
============== RESTART: /home/user/RTR108/Lekcijas108/3/Test.py ==============
I'm a lumberjack, and I'm okay.
I sleep all night and I work all day.
I'm a lumberjack, and I'm okay.
I sleep all night and I work all day.
>>> 
