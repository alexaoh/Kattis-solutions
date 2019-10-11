word = input()
counter = ""
for char in word:
    if char == "s":
        counter += "s"
        if counter == "ss":
            break
    else:
        counter = ""
if counter == "ss":
    print("hiss")
else:
    print("no hiss")
