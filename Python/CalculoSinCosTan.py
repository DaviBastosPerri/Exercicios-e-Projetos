import math
ang = float(input('Digite um Ângulo '))
ar = math.radians(ang)
seno = math.sin(ar)
cosseno = math.cos(ar)
tangente = math.tan(ar)

print('Seno: {:.2f}\nCosseno: {:.2f}\nTangente: {:.2f}'.format(seno, cosseno, tangente))