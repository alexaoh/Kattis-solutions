import math as mt
text = input().split(" ")

print(int(int(text[0])/mt.sin(int(text[1])*(mt.pi)/180))+1)
