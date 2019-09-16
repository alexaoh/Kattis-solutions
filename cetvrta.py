text = input().split()

yes = dict()

liste1 = array()
liste2 = array()

for i in range(len(text),2):
    if e in yes.keys():
        liste1.append(i)
    yes[i] = 0

for e in range(1,len(text),2):
    if e in yes.values():
        liste2.append(e)
    yes[e-1] = e

print(str(liste1[0]),str(liste2[0]))
