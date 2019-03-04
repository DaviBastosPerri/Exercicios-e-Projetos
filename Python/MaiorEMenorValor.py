a = float(input('Digite o primeiro numero: '))
b = float(input('Digite o segundo numero: '))
c = float(input('Digite o terceiro numero: '))

if a > b and b > c:
    print('o maior valor é {} \nO menor valor é {}'.format(a, c))
if a > c and c > b:
    print('o maior valor é {} \nO menor valor é {}'.format(a, b))
if b > a and a > c:
    print('o maior valor é {} \nO menor valor é {}'.format(b, c))
if b > c and c > a:
    print('o maior valor é {} \nO menor valor é {}'.format(b, a))
if c > a and a > b:
    print('o maior valor é {} \nO menor valor é {}'.format(c, b))
if c > b and b > a:
    print('o maior valor é {} \nO menor valor é {}'.format(c, a))
