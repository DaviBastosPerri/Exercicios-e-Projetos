from random import shuffle
nome1 = str(input('Aluno 1: '))
nome2 = str(input('Aluno 2: '))
nome3 = str(input('Aluno 3: '))
nome4 = str(input('Aluno 4: '))

lista = [nome1, nome2, nome3, nome4]

shuffle(lista)

print('A ordem de apresentação será:\n')
print(lista)


