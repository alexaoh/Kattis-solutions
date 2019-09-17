name = input()

char_dict = {}
for char in name:
    if char_dict[char] != None: #Den fjerner bokstavene som opptrer flere ganger, ikke kun de som opptrer flere ganger etter hverandre!!
        char_dict[char] =+ 1
    else:
        char_dict[char] = 1

out = ""
for key,value in char_dict.items():
    if value > 1:
        out += key
    elif value == 1:
        out += key

print(out)
