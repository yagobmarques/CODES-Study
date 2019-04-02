def verificaSomas(numeros, alvo):
    i = 0   # indice de percorrer a lista do começo
    j = len(numeros)-1  # indice de percorrer a lista do fim
    condicao = 0
    while(i!=j):
        if(numeros[i]+numeros[j]==alvo and i != j):
            condicao = 1
            break
        elif(numeros[i]+numeros[j]>alvo):
            j = j - 1
        else:
            i = i + 1
    if condicao:       
        print(numeros[i]," + ", numeros[j], " = ", alvo)
    else:
        print("Não tem soma correspondente!")
        




from random import randint
from sortedcontainers import SortedList
numeros = SortedList()
condicao = True
for j in range(10):
    c = randint(1,50)
    while c in numeros != True:
        c = randint(1,15)
    numeros.add(c)
alvo = randint(1,70)
print(numeros)
print("Alvo eh: %d" %(alvo))
verificaSomas(numeros, alvo)