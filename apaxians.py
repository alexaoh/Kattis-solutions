name = input()

#char_dict = {}
#for i in name:
#    if char_dict[char] != None: #Den fjerner bokstavene som opptrer flere ganger, ikke kun de som opptrer flere ganger etter hverandre!!
#        char_dict[char] =+ 1
#    else:
#        char_dict[char] = 1
#
#out = ""
#for key,value in char_dict.items():
#    if value > 1:
#        out += key
#    elif value == 1:
#        out += key

#print(out)

text_liste = name[0]

for i in range(1,len(name)):
    if name[i-1] != name[i]:
        text_liste += name[i]

print(text_liste)
