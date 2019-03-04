import datetime
ano = int(input('Digite um ano \n"0" para calcular o ano atual da maquina '))
if ano == 0:
    ano = datetime.date.today().year
if ano%4 == 0 and ano%400 == 0 or ano % 100 != 0:
    print('o ano {} é BISSEXTO '.format(ano))
else:
    print('O ano {} não é bissexto'.format(ano))
