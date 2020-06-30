Python 3.6.8 (default, Jan 14 2019, 11:02:34) 
[GCC 8.0.1 20180414 (experimental) [trunk revision 259383]] on linux
Type "help", "copyright", "credits" or "license()" for more information.
>>> 5 == 5
True
>>> 5 == 6
False
>>> type(True)
<class 'bool'>
>>> type(False)
<class 'bool'>
>>> 17 and True
True
>>> 0 and True
0
>>> if x > 0 :print('x is positive')

Traceback (most recent call last):
  File "<pyshell#7>", line 1, in <module>
    if x > 0 :print('x is positive')
NameError: name 'x' is not defined
>>> if x > 0 :print('x is positive')
5
SyntaxError: invalid syntax
>>> x=10;
if x > 0 :
	print('x is positive')
	
SyntaxError: multiple statements found while compiling a single statement
>>> x=10; if x > 0 :
	print('x is positive')
	
SyntaxError: invalid syntax
>>> if x > 0 :
	print('x is positive')

	
Traceback (most recent call last):
  File "<pyshell#13>", line 1, in <module>
    if x > 0 :
NameError: name 'x' is not defined
>>> x = 10
>>> if x > 0 :
	print('x is positive')

	
x is positive
>>> x = -5
>>> if x<0:
	pass

>>> if
SyntaxError: invalid syntax
>>> 
============== RESTART: /home/user/RTR108/Lekcijas108/3/Test.py ==============
Small
Done
>>> 
============== RESTART: /home/user/RTR108/Lekcijas108/3/Test.py ==============
Traceback (most recent call last):
  File "/home/user/RTR108/Lekcijas108/3/Test.py", line 1, in <module>
    if x < y:
NameError: name 'x' is not defined
>>> x=5
>>> y=6
>>> 
============== RESTART: /home/user/RTR108/Lekcijas108/3/Test.py ==============
Traceback (most recent call last):
  File "/home/user/RTR108/Lekcijas108/3/Test.py", line 1, in <module>
    if x < y:
NameError: name 'x' is not defined
>>> 
============== RESTART: /home/user/RTR108/Lekcijas108/3/Test.py ==============
x is less than y
>>> 
============== RESTART: /home/user/RTR108/Lekcijas108/3/Test.py ==============
Enter Fahrenheit Temperature: 56
13.333333333333334
>>> 
============== RESTART: /home/user/RTR108/Lekcijas108/3/Test.py ==============
Enter Fahrenheit Temperature:a
Please enter a number
>>> 5
5
>>> 
============== RESTART: /home/user/RTR108/Lekcijas108/3/Test.py ==============
Enter Fahrenheit Temperature:25
-3.888888888888889
>>> 25
25
>>>  x =4
SyntaxError: unexpected indent
>>> 
