frase = str(input('Digite uma frase:  ')).strip().lower()
print('frase: {}\nQuantidade de "A":{}\nprimeiro "A":{}\nUltimo "A":{}'.format(frase, frase.count('a'), frase.find('a')+1, frase.rfind('a')+1))
