def noRepeatedLetters(string):
    l = ""
    for i in string:
        if i not in l:
            l = l + i
    if l == string:
        return 1
    else:
        return 0
string = input ("Entre com uma string: ")
max_len  = 0
for j in range(len(string)):
    for h in range(j+1, len(string)+1):
        if noRepeatedLetters(string[j:h]) and len(string[j:h])>max_len:
            max_len = len(string[j:h])
print(max_len)