Python 3.6.9 (default, Nov  7 2019, 10:44:02) 
[GCC 8.3.0] on linux
Type "help", "copyright", "credits" or "license()" for more information.
>>> from math import sin
def f(x):
	return sin(x)
x0 = -2
delta_h = 0.01
f0 = f(x0)
f1 = f(x0+delta_h)
fAtv_f0 = (f1-f0)/delta_h
print("%.4f\t%.4f\t%.4f" %(x0,f0,fAtv_f0))

SyntaxError: multiple statements found while compiling a single statement
>>> from math import sin
>>> def f(x):
	return sin(x)

>>> x0 = -2

>>> delta_h = 0.01

>>> f0 = f(x0)
>>> f1 = f(x0+delta_h)

>>> fAtv_f0 = (f1-f0)/delta_h
>>> print("%.4f\t%.4f\t%.4f" %(x0,f0,fAtv_f0))
-2.0000	-0.9093	-0.4116
>>> xmax = 2
>>> while(x0<xmax)
SyntaxError: invalid syntax
>>> while(x0<xmax):
	
