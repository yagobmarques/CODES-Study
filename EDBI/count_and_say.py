def sayNumber(number):
    number = number + "."
    current = number[0]
    count = 0
    answer = []
    for j in number:
        if j == current:
            count += 1
        else:
            answer.append(count)
            answer.append(current)
            count = 1
            current = j
    print(answer)
    return answer   
terms = ["1"]
# n_term = str(input("What position do you want?"))
n_term = input("What position do you want?")
for j in range(1):
    terms.append(sayNumber(str(terms[j])))
print(terms)