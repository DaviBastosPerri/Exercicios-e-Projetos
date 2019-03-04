#Escreva uma função que verifica se um número está em um determinado intervalo (inclusive o máximo e mínimo)

def num(num, min, max):
    if num >= min and num <= max:
        return print('O numero {} está no intervalo de {} á {} '.format(num, min, max))
    else:
        return print('O numero {} não está no intervalo de {} á {}'.format(num, min, max))

v = num(50, 10, 100)