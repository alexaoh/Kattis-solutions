text_liste = input().split()
new_name = ""
if text_liste[0][-1] == "e":
    new_name = text_liste[0]+"x"+text_liste[1]
elif text_liste[0][-1] in ["a","i","o","u"]:
    new_name = text_liste[0][:-1] + "ex" + text_liste[1]
elif text_liste[0][-2:] == "ex":
    new_name = text_liste[0] + text_liste[1]
else:
    new_name = text_liste[0] + "ex" + text_liste[1]

print(new_name)
