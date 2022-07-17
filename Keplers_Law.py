import math as mt
for i in range(int(input())):
    t1,t2,r1,r2=map(int,input().split())
    if pow(t1,2)/pow(r1,3) == pow(t2,2)/pow(r2,3):
        print("Yes")
    else:
        print("No")