f = open("1.in","r")
list = f.readlines()
f.close()

for i in range(len(list)):
    list[i] = list[i].replace("\n","")
    list[i] = list[i].split()
    for e in range(len(list[i])):
        list[i][e] = float(list[i][e])

qaly_accumulated = 0

for i in range(1,len(list)):
    for e in range(len(list[i])-1):
        qaly_accumulated += list[i][e]*list[i][e+1]

#Denne hadde alt for lang kjøretid, så fungerte ikke!
