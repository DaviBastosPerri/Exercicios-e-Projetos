n1 = float(input('digite o primeiro valor '))
n2 = float(input('digite o segundo valor '))
adição = n1+n2
subtração = n1-n2
multiplicação = n1*n2
divisão = n1/n2
potência = n1**n2
divisãoInteira = n1//n2
restodaDivisão = n1%n2
raizQuadrada1 = n1**(1/2)
raizCubica1 = n1**(1/3)
raizQuadrada2 = n2**(1/2)
raizCubica2 = n2**(1/3)

print('a adição de {} e {} é {:.2f}'.format(n1, n2, adição))
print('a subtração de {} e {} é {:.2f}'.format(n1, n2, subtração))
print('a multiplicação de {} e {} é {:.2f}'.format(n1, n2, multiplicação))
print('a divisão de {} e {} é {:.2f}'.format(n1, n2, divisão))
print('{} elevado a {} é {:.2f}'.format(n1, n2, potência))
print('a divisão inteira de {} por {} é {:.2f}'.format(n1, n2, divisão))
print('o resto da divisão entre {} e {} é {:.2f}'.format(n1, n2, restodaDivisão))
print('a raiz quadrada de {} é {:.2f}'.format(n1, raizQuadrada1))
print('a raiz cubica de{} é {:.2f}'.format(n1, raizCubica1))
print('a raiz quadrada de {} é {:.2f}'.format(n2, raizQuadrada2))
print('a raiz cubica de {} é {:.2f}'.format(n2, raizCubica2))
