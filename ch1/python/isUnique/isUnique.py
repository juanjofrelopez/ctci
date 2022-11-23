print("-------------------------")
# list are mutable, tuples are inmutable

s = "Qua onda"
l = []
for x in s:
    if(x in l):
        print("tiene repetidas: ",x)
        print("-------------------------")
        quit()
    else:
        l.append(x)

print("no tiene repetidas")