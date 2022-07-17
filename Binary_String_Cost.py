import itertools
from itertools import permutations
for i in range(int(input())):
    n,x,y = map(int,input().split())
    s = list(input())
    l = list(itertools.permutations(s))
    p = ([''.join(i) for i in l])
    print(min(p.count('01')+p.count('10')))
    # count_01 = p[1].count('01')*x
    # count_10 = p[1].count('10')*y
    # print()

