# Percorra a string abaixo e se o comprimento de uma palavra for par imprima "é par!"
st = 'Print every word in this sentence that has an even number of letters'
s = st.split()
for i in s:
    t = len(i)
    if t %2==0:
        print('"{}" tamanho: {} é PAR!'.format(i, t))
