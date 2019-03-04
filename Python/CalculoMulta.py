velo = int(input('Qual a velocidade atual do carro?\n'))
if velo <= 80:
    print('Dirija com cuidado! ')
else:
    multa =(velo - 80)*7
    print ('Você foi multado(a)\n VALOR R${},00'.format(multa))
