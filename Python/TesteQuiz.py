print('*'*15, 'QUIZ', '*'*15)

acertos = 0
erros = 0

pergunta1 = str(input('Quantos anos eu tenho? \n A) 20 \n B) 17 \n '
                      'C) 18 \n D) 21 \n E) 19 \n')).lower().strip()
if pergunta1 == 'c'or pergunta1 == '18':
    print('\033[32m' + 'Você acertou!' + '\033[0;0m')
    acertos = acertos + 1
else:
    print('\033[31m' + 'Você errou!' + '\033[0;0m')
    erros = erros + 1
pergunta2 = str(input('Qual instrumento eu sei tocar? \n A) Viola \n B) Sax '
                      '\n C) Trompete \n D) Violino \n E) Flauta')).lower().strip()
if pergunta2 == 'd' or pergunta2 == 'violino':
    print('\033[32m' + 'Você acertou!' + '\033[0;0m')
    acertos = acertos + 1
else:
    print('\033[31m' + 'Você errou!' + '\033[0;0m')
    erros = erros + 1

print('Você acertou {} e errou {}'.format(acertos, erros))