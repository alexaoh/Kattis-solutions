text = input().split(" ")

if (text[0] == "OCT" and int(text[1]) == 31) or (text[0] == "DEC" and int(text[1]) == 25):
    print("yup")
else:
    print("nope")
