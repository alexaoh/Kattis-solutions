numbers = input().split()
left = int(numbers[0])
right = int(numbers[1])

if left == right:
    if left == 0 and right == 0:
        print("Not a moose")
    else:
        print("Even",left*2)
elif left != right:
    if left > right:
        print("Odd", left*2)
    else:
        print("Odd", right*2)
