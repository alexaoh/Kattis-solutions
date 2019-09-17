import math
numbers = input().split()

pyt = math.sqrt((int(numbers[1]))**2+int(numbers[2])**2)

for i in range(int(numbers[0])):
    inn = int(input())
    if (inn <= int(numbers[1])) or (inn <= int(numbers[2])) or (inn <= pyt):
        print("DA")
    else:
        print("NE")
