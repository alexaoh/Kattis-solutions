X = int(input())
N = int(input())
sum_brukt = 0
sum_har = X*N
for i in range(N):
    sum_brukt += int(input())
print(X+sum_har-sum_brukt)
