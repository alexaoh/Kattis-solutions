text = input().split("\n").split()

for i in range(1,int(len(text))+1):
    e = 1
    if int(text[i][e])-int(text[i][e+1]) > int(text[i][0]):
        print("advertise")
    elif int(text[i][e])-int(text[i][e+1]) == int(text[i][0]):
        print("does not matter")
    else:
        print("do not advertise")

#Får runtime error!
