Python 3.6.8 (default, Jan 14 2019, 11:02:34) 
[GCC 8.0.1 20180414 (experimental) [trunk revision 259383]] on linux
Type "help", "copyright", "credits" or "license()" for more information.
>>> 
 RESTART: /home/user/RTR108/Lekcijas108/3/3.Variables_expressions_statements.py 
>>> 20+32
52
>>> minutes = 59
>>> minutes/60
0.9833333333333333
>>> minutes//60
0
>>> 1+1
2
>>> x =5
>>> x+1
6
>>> 2*(3-1)
4
>>> 1+1**(5-2)
2
>>> (1+1)**(5-2)
8
>>> #*1**3
>>> 3*1**3
3
>>> (3*1)**3
27
>>> quotient = 7//3
>>> print (quotient)
2
>>> reaminder = 7 % 3
>>> print(reaminder)
1
>>> first = 10
>>> second = 15
>>> print(first+second)
25
>>> first = '100'
>>> second = '150'
>>> print(first+second)
100150
>>> first = 'Test'
>>> second = 3
>>> print(first*second)
TestTestTest
>>> first = 'Test '
>>> print(first*second)
Test Test Test 
>>> inp = input()
25
>>> print (inp)
25
>>> inp = input()
Some good prices
>>> print (inp)
Some good prices
>>> name = input('Kā Tevi sauc\n')
Kā Tevi sauc
a
>>> name = input('Kā Tevi sauc?\n')
Kā Tevi sauc?
Kārlis
>>> print (inp)
Some good prices
>>> print (name)
Kārlis
>>> prompt = 'What...is the airspeed velocity of an unladen swallow?\n'
>>> speed = input(prompt)
SyntaxError: multiple statements found while compiling a single statement
>>> prompt = 'What...is the airspeed velocity of an unladen swallow?\n'
>>> speed = input(prompt)
What...is the airspeed velocity of an unladen swallow?
25
>>> int (speed)
25
>>> int (speed)+5
30
>>> speed = input(prompt)
What...is the airspeed velocity of an unladen swallow?
hmm
>>> int (speed)+5
Traceback (most recent call last):
  File "<pyshell#42>", line 1, in <module>
    int (speed)+5
ValueError: invalid literal for int() with base 10: 'hmm'
>>> hours = 35.0
rate = 12.50
pay = hours * rate
print(pay)
SyntaxError: multiple statements found while compiling a single statement
>>> hours = 35.0
rate = 12.50
pay = hours * rateprint(pay)
SyntaxError: multiple statements found while compiling a single statement
>>> 
>>> hours = 35.0; rate = 12.50; pay = hours * rate; print(pay)
437.5
>>> x1q3z9ahd = 35.0; x1q3z9afd = 12.50; x1q3p9afd = x1q3z9ahd * x1q3z9afd; print(x1q3p9afd)
437.5
>>> a = 35.0; b = 12.50; c = a * b; print(c)
437.5
>>> bad name = 5
SyntaxError: invalid syntax
>>> month = 09
SyntaxError: invalid token
>>> >>> principal = 327.68; interest = principle * rate
SyntaxError: invalid syntax
>>> principal = 327.68; interest = principle * rate
Traceback (most recent call last):
  File "<pyshell#52>", line 1, in <module>
    principal = 327.68; interest = principle * rate
NameError: name 'principle' is not defined
>>> 1.0 / 2.0 * pi
Traceback (most recent call last):
  File "<pyshell#53>", line 1, in <module>
    1.0 / 2.0 * pi
NameError: name 'pi' is not defined
>>> pi = 3,14
>>> class(pi)
SyntaxError: invalid syntax
>>> type(pi)
<class 'tuple'>
>>> pi = 3.14
>>> 1.0 / 2.0 * pi
1.57
>>> 1.0 / (2.0 * pi)
0.1592356687898089
>>> name = input(Enter your name: )
SyntaxError: invalid syntax
>>> name = input('Enter your name: ')
Enter your name: Chuck
>>> print('Hello 'name)
SyntaxError: invalid syntax
>>> print('Hello ', name)
Hello  Chuck
>>> print('Hello', name)
Hello Chuck
>>> hours = input('Enter Hours: ')
Enter Hours: 5
>>> rate = input('Enter Rate: ')
Enter Rate: 2.75
>>> print ('Pay:', hours/rate)
Traceback (most recent call last):
  File "<pyshell#67>", line 1, in <module>
    print ('Pay:', hours/rate)
TypeError: unsupported operand type(s) for /: 'str' and 'str'
>>> int hours = input('Enter Hours: ')
SyntaxError: invalid syntax
>>> 35
35
>>> hours = int(input('Enter Hours: '))
Enter Hours: 35
>>> rate = int(input('Enter Rate: '))
Enter Rate: s
Traceback (most recent call last):
  File "<pyshell#71>", line 1, in <module>
    rate = int(input('Enter Rate: '))
ValueError: invalid literal for int() with base 10: 's'
>>> rate = float(input('Enter Rate: '))
Enter Rate: 2.75
>>> print ('Pay:', hours/rate)
Pay: 12.727272727272727
>>> print ('Pay:', hours*rate)
Pay: 96.25
>>> hours = int(input('Enter Hours: '))
Enter Hours: 35
>>> rate = float(input('Enter Rate: '))
Enter Rate: 2.75
>>> print ('Pay:', hours*rate)
Pay: 96.25
>>> print ('Pay:', round(hours*rate))
Pay: 96
>>> 
