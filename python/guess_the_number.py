
def bisect(p, r):
    if p > r:
        return
    q = (p+r)//2
    print(q, flush=True)
    inp = input()
    if inp == "correct":
        return
    elif inp == "lower":
        bisect(p, q)
    elif inp == "higher":
        bisect(q,r)
    

bisect(1, 1000)

import sys

def bisect2(p, r):
    if p > r:
        return 0
    q = (p+r)//2
    sys.stdout.write(str(q)+'\n')
    sys.stdout.flush()
    for line in sys.stdin:
        inp = line.rstrip()
        break

    if inp == "correct":
        return 0
    elif inp == "lower":
        bisect(p, q)
    elif inp == "higher":
        bisect(q,r)
   
#bisect2(1, 1000)

# I am still getting a runtime-error on the third test!? Why!?
# This should work anyway ? Maybe if I write it in C or C++.
# I think something is wrong with the flushing perhaps, but the algorithm seems fine!
