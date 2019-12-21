Python 3.6.9 (default, Nov  7 2019, 10:44:02) 
[GCC 8.3.0] on linux
Type "help", "copyright", "credits" or "license()" for more information.
>>> 
2=34
SyntaxError: can't assign to literal
>>> 2+34
36
>>> ab=5
>>> ac=12
>>> pow(ab,ac)
244140625
>>> ab++
SyntaxError: invalid syntax
>>> ab-ac
-7
>>> ab*ac
60
>>> ab*ac-ab/ac
59.583333333333336
>>> 5!
SyntaxError: invalid syntax
>>> 1*2*3*4*5
120
>>> 256/16
16.0
>>> 0x01+0x02
3
>>> 
>>> 0x04<<2
16
>>> 0x01>>2
0
>>> 0x01<<10
1024
>>> ~0x03
-4
>>> 00000001*00001111
SyntaxError: invalid token
>>> b0 1111 + b0 1111
SyntaxError: invalid syntax
>>> hex(16)
'0x10'
>>> hex(16)<<2
Traceback (most recent call last):
  File "<pyshell#21>", line 1, in <module>
    hex(16)<<2
TypeError: unsupported operand type(s) for <<: 'str' and 'int'
>>>
