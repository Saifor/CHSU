import math

a = float(input("input a: "))
b = float(input("input b: "))
c = float(input("input c: "))
d = float(input("input d: "))

"""
II: # |a| and 5 – (b + log⁡ c + d) / 2
1) |a|
2) log(c)
3) log(c) + d
4) log(c) + d + b
5) |a| & 5
6) log(c) + d + b / 2
7) (|a| & 5) - (log(c) + d + b / 2)


VII: # a - b div c * (3 or d) + 2
1) 3 | d
2) b // c
3) (b // c) * (3 | d)
4) a - ((b // c) * (3 | d))
5) (a - ((b // c) * (3 | d))) + 2
"""
var7 = a - b // c * (3 | int(d)) + 2

if (c == 1 or c <= 0):
    raise ValueError("'c' can't be equal to 1 or <=0")

var2 = (int(abs(a)) & 5) - (b + math.log(c) + d) / 2

print(f"result 1:  {var2}")
print(f"result 2:  {var7}")