from sortedcontainers import SortedList
words = ["eat", "tea", "tan", "ate", "nat", "bat"]
dicio = {}
ordenado = SortedList()
key = ""
for j in words:
    ordenado.update(j)
    for h in ordenado:
      key = key+str(h)
    if key not in dicio.keys():
      dicio.setdefault(key, [])
    dicio[key].append(j)
    ordenado.clear()
    key = ""
print(dicio)