print('*-*'*15,'\n       CALCULADORA DE NOTAS UNIFACCAMP')
p1 = float(input('Qual sua nota da P1? '))
p2 = float(input('Qual sua nota da P2? '))
p3 = float(input('Qual sua nota da P3? '))
e1 = int(input('Qual a nota do eixo1? '))
e2 = int(input('Qual a nota do eixo2? '))
e3 = int(input('Qual a nota do eixo3? '))
e4 = int(input('Qual a nota do eixo4? '))
edp = int(input('Quantos EDPs você fez? '))
contador = 0
acumulador = 0
while contador < edp:
    nedp = float(input('Digite a nota do EDP '))
    contador = contador + 1
    acumulador = acumulador + nedp
mp = ((p1+p2+p3)/3)* 0.75
me = ((e1+e2+e3+e4)/4) * 0.125
md = (acumulador/contador) * 0.125
total = mp + me + md
if total >= 6:
    print('-_-'*15,'\n''Parabéns, você foi aprovado com nota {:.2f}'.format(total))
    print('\n Provas: {:.2f} \n Eixos: {:.2f} \n EDPs: {:.2f}'.format(mp, me, md))
if total < 6:
    print('-_-'*15,'\n', 'Infelizmente você não foi aprovado, nota: {:.2f}'.format(total))
