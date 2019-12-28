text = input()
liste = [1,0,0]
for char in text:
    if char == "A":
        liste[0], liste[1] = liste[1],liste[0]
    elif char == "B":
        liste[1],liste[2] = liste[2], liste[1]
    else:
        liste[0],liste[2] = liste[2],liste[0]
print(liste.index(1) + 1)
