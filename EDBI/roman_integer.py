romans = {'I':1,
'V':5,
'X':10,
'L':50,
'C':100,
'D':500,
'M':1000,
'IV':4,
'IX':9,
'XL':40,
'XC':90,
'CD': 400,
'CM':900}
number_algarisms = input("Enter with your roman number: ")
cond = True
index = 0
integer_number = 0
ajuda = 0
while cond:
    if index < len(number_algarisms)-1:
        if number_algarisms[index]+number_algarisms[index+1] in romans:
            integer_number = integer_number + romans[number_algarisms[index]+number_algarisms[index+1]]
            index +=2
            if index + 2 >= len(number_algarisms)-1:
                ajuda = 1
        else:
            integer_number = integer_number + romans[number_algarisms[index]]
            index += 1
    if index >= len(number_algarisms)-1:
        cond = False
if ajuda == 0:
    integer_number = integer_number + romans[number_algarisms[len(number_algarisms)-1]]
print(integer_number)