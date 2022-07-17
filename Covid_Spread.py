import math as mt
for i in range(int(input())):
    n,d=map(int,input().split())
    sum = 1
    for j in range(1,d+1):
        if j<=10:
            sum*=2 
            if sum>n:
                sum=n
            else :
                sum*=3
                if sum>n:
                    sum=n
                    break
    print(sum)
    