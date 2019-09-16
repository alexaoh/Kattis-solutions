text = input().split()
slutt = int(text[0])+2
sum = 0
for i in range(1,slutt):
    if int(text[i]) < 0:
        sum += 1
print(sum)
