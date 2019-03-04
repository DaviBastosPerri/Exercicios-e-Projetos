import math
co = float(input('digite o cateto oposto '))
ca = float(input('digite o cateto adjacente'))
hi = math.hypot(co, ca)
print('cateto oposto: {}\ncateto adjacente: {}\nhipotenusa: {:.2f}'.format(co, ca, hi))