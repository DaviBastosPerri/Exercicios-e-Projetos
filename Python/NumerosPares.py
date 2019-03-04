# range() para imprimir todos os números pares de 0 a 10

r = range(0, 10)
for numero in r:
    if numero % 2 == 0:
        print(numero)
