N = int(input())

for i in range(N):
    ord = input()
    if ord[0:10] == "Simon says":
        print(ord[11:])
