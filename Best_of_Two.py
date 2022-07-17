# # cook your dish here
# for i in range(int(input())):
#     ans = []
#     x,y = map(int,input().split())
#     if x>y:
#         print(x)
#     else :
#         print(y)

T = int(input())
for i in range(T):
    n,x,y = map(int,input().split())
    if n >= x + y:
        print("YES")
    else:
        print("NO")