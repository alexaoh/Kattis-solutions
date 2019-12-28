lengde = int(input())

for i in range(lengde):
    ny_tekst = input()
    if ny_tekst == "P=NP":
        print("skipped")
    else:
        tall_liste = ny_tekst.split("+")
        summen = int(tall_liste[0])+int(tall_liste[1])
        print(summen)
