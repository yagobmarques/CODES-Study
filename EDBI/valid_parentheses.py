from queue import LifoQueue
pilha = LifoQueue()
keys = {'(' : ')',
'{' : '}',
'[' : ']'}
strings = input("Entre com um conjunto de ({[]}): ")
controle = 0
for j in strings:
    if j == '(' or j == '{' or j == '[':
        pilha.put(keys[j])
    else:
        if pilha.empty()== True or j != pilha.get():
            controle = 1
            break
if controle == 0 and pilha.empty()==True:
    print("Caracteres validos!")
else:
    print("Caracteres invalidos!")