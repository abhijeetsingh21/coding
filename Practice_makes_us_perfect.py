p = list(map(int,input().split()))
sum = 0
for j in range(len(p)):
    if p[j] >= 10:
        sum+=1
print(sum)