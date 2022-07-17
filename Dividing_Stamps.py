b=int(input())
a = list(map(int,input().rsplit()))[:b]
sum1 = 0
for j in range(b,0,-1):
    sum1+=j    
if sum(a)== sum1:
    print("YES")
else:
    print("NO")