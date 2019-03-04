viagem = float(input('QUantos km tem a viagem? '))
if viagem <= 200:
    preço = viagem * 0.50
if viagem > 200:
    preço = viagem * 0.45
print('Você irá pagar R${:.2f}'.format(preço))