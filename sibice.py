import math
numbers = input().split()

pyt = math.sqrt(int(numbers[1]/2)**2+int(numbers[2])**2)

for i in range(4,len(numbers)+1):
    if int(numbers[i]) <= int(numbers[1]) or int(numbers[i]) <= int(numbers[2]) or int(numbers[i]) <= pyt:
        print("DA")
    else:
        print("NE")
