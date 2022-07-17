import math as mt
import sys
for i in range(int(input())):
    n = int(input())
    Min = 9898989898998
    temp = 0
    for j in range(1, int(mt.sqrt(n))+1):
        if n % j == 0:
            pre = j
            post = n//j
            temp = abs(post-pre)
            if temp < Min:
                Min = temp
    print(Min)
