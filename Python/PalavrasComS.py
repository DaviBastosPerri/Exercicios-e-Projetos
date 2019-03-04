# Printar todas as palavras que começam com 's'
st = 'Print only the words that start with s in this sentence'
frase = st.split()
for letra in frase:
    if letra[0] == 's':
        print(letra)