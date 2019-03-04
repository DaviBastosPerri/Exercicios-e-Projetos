# Escreva uma função Python que aceita uma string e calcule o número de maiúsculas e minúsculas.


def ul(strin):
    up = 0
    low = 0
    for letter in strin:
        if letter.isupper():
            up += 1
        elif letter.islower():
            low += 1
        else:
            pass
    print('Up: {} \nLow:{} '.format(up, low))


ul(input('Digite a string: '))