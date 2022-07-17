# T = int(input())
# for i in range(T):
#     x = int(input())
#     y = x%3
#     if x%3 ==0:
#         print(0)
#     else :
#         print(3-y)
from math import ceil


T = int(input())
for i in range(T):
    x,y,z = map(int,input().split())  
    times = (x/y)
    ans = z*ceil(times)
    print(ans)