for i in range(int(input())):
    n,m=map(int,input().split())
    if n<m:
        ans = n
    else:
        ans = 2*n-m
    print(ans)