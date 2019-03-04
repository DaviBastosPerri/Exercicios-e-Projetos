from random import choice

cor = ['\033[34m' + ' O' + '\033[0;0m', '\033[33m' + ' X' + '\033[0;0m']
posicoes = ' 7 | 8 | 9 , 4 | 5 | 6 , 1 | 2 | 3 '
listap1 = []
listap2 = []
escolha = 0
jogada = 0

vitorias = [[1, 2, 3], [4, 5, 6], [7, 8, 9],
            [7, 4, 1], [8, 5, 2], [9, 6, 3],
            [7, 5, 3], [1, 5, 9]]


def compara_vitoria(jogador, jogadas_jogador):
    venceu = False
    for v in vitorias:
        vencedor = 0
        for x in v:
            # comparar com listas de jogadas por jogador
            if x in jogadas_jogador:
                vencedor = vencedor + 1
            #else:
                #pass
                #vencedor = vencedor - 1
        if vencedor == 2:
            print(jogador, ' venceu')
            venceu = True
    return venceu


def tabuleiro(coor=None, posicoes=None, jogador=None):
    if jogador:
        posicoes = posicoes.replace(' ' + coor + ' ', '\033[34m' + jogador + ' \033[0;0m')

    for p in posicoes.split(','):
        print(p)

    return posicoes


def proximo(opc, coor):
    if opc % 2 == 0:
        escolha = opc + 1
        listap1.append(int(coor))
    else:
        escolha = opc - 1
        listap2.append(int(coor))
    return escolha


print('§' * 14, '\033[1m', 'JOGO DA VELHA', '\033[0m', '§' * 14, '\n')

tabuleiro(posicoes=posicoes)

player1 = str(input('          Qual o nome do Player ' + cor[0] + '? ').strip())
player2 = str(input('          Qual o nome do Player ' + cor[1] + '? ').strip())
player1 = player1 + cor[0]
player2 = player2 + cor[1]
players = [player1, player2]
# escolha = choice([0, 1])

# inicio do jogo

# criar funcao while True:
# criar variavel para verificar se algum jogador venceu
# no final do while adiciona um if comparando a funcao compara_vitoria = true
while True:
    print('             Vez do {} jogar!'.format(players[escolha]))
    coor = input('Digite coordenada ')

    posicoes = tabuleiro(coor, posicoes, cor[escolha])

    # precisa verificar qual lista passar para a funcao
    # venceu = compara_vitoria(players[escolha], listap1)

    if escolha == 0:
        resultado = compara_vitoria(players[escolha], listap1)
    else:
        resultado = compara_vitoria(players[escolha], listap2)

    if resultado:
        print('Acabou')
        break

    escolha = proximo(escolha, coor)

    print(listap1)
    print(listap2)

    if jogada == 9:
        print('Empate')
        break

# concertar coordenadas iguais

