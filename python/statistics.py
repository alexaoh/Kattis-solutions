line = input()
out = {}
i = 1
while line != "":
    lst = line.split();
    lst = list(map(int, lst))
    lst.pop(0)
    ma = max(lst)
    mi = min(lst)
    r = ma - mi
    out[i] = [mi, ma, r]
    i += 1
    try: 
        line = input()
    except EOFError:
        break

for key, value in out.items():
    print(f"Case {key}: {value[0]} {value[1]} {value[2]}")
