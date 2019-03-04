import random
print('VOU PENSAR EM UM NUMERO DE 0 a 5, TENTE ADIVINHAR\n')
npc = random.randint(0, 5)
ne = int(input('Qual numero eu pensei?  '))
if ne == npc:
    print('PARABÉNS, VOCÊ GANHOU! Eu pensei no número {}'.format(npc))
else:
    print('PERDEUU! pensei no número {}'.format(npc))