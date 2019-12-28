numbers = input().split()

hours_24_to_mins = int(numbers[0]) * 60
tot = hours_24_to_mins + int(numbers[1])

after = tot - 45

if after < 0:
    after = 24*60 + after

after_hours = after // 60
after_mins = after % 60

print(after_hours,after_mins)
