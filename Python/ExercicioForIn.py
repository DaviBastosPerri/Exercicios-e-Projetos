# Escreva um programa que imprima os números inteiros de 1 a 100.
# Para múltiplos de três imprima "Fizz" ao ivés do número, e para os múltiplos de cinco imprima "Buzz".
# Para números que são múltiplos de três e cinco imprima "FizzBuzz".

for numero in range(1, 100):
    if numero %3 == 0 and numero %5 == 0:
         print('FizzBuzz')
    elif numero %3 == 0:
        print('Fizz')
    elif numero %5 ==0:
        print('Buzz')
    else:
        print(numero)
