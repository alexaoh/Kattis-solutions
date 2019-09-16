#text = input().split()
#if int(text[0]) > 0 and int(text[1]) > 0:
#    print(1)
#elif int(text[0]) < 0 and int(text[1]) > 0:
#    print(2)
#elif int(text[0]) < 0 and int(text[1]) < 0:
#    print(3)
#else:
#    print(4)

x = int(input())
y = int(input())
if x > 0 and y > 0:
    print(1)
elif x < 0 and y > 0:
    print(2)
elif x < 0 and y < 0:
    print(3)
else:
    print(4)
