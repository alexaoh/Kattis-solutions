inp = input().split()
X = int(inp[0])
Y = int(inp[1])
N = int(inp[2])

for i in range(1,N+1):
    if i % X == 0 and i % Y == 0:
        print("FizzBuzz\n")
    elif i % Y == 0:
        print("Buzz\n")
    elif i % X == 0:
        print("Fizz\n")
    else:
        print(str(i)+"\n")
