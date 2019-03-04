salário = float(input('Qual seu salário? R$'))
if salário <= 1250:
    aumento = salário + (salário/100) * 15
if salário > 1250:
    aumento = salário + (salário/100) * 10
print(20*'_-')
print('Dados:\nSalário Antigo: R${:.2f}\nSalário Atual: R${:.2f}\nAumento de R${:.2f}'.format(salário, aumento, aumento - salário))
