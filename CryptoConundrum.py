word = list(input())
print(word)
counter = 0

if word[0] != "P":
    word[0] = "P"
    counter += 1
    print(counter)

for i in range(1,len(word)):
    if word[i] != "P":
        if word[i-1] == "P":
            word[i] = "E"
            counter += 1
        elif word[i-1] == "E":
            word[i] = "R"
            counter += 1
        elif word[i-1] == "R":
            word[i] = "P"
            counter += 1
    elif word[i] != "E":
        if word[i-1] == "P":
            word[i] = "E"
            counter += 1
        elif word[i-1] == "E":
            word[i] = "R"
            counter += 1
        elif word[i-1] == "R":
            word[i] = "P"
            counter += 1
    elif word[i] != "R":
        if word[i-1] == "P":
            word[i] = "E"
            counter += 1
        elif word[i-1] == "E":
            word[i] = "R"
            counter += 1
        elif word[i-1] == "R":
            word[i] = "P"
            counter += 1

print(counter)
