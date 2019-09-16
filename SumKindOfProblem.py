textliste = input().split("\n")


for i in range(1,textliste):
    textliste[i] = textliste[i].split(" ")
    teller = 0
    S_1 = 0
    S_2 = 1
    S_3 = 0
    for index in range(textliste[i][0]):
        teller += 2
        S_1 += index
        if index % 2 == 0:
            S_2 += index
        else:
            S_3 += 2
    print(textliste[0][0], str(S_1), str(S_2), str(S_3))

#Får runtime error!!
