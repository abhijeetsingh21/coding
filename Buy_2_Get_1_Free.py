for i in range(int(input())):
    n,x=map(int,input().split())
    count=0
    total=0
    if n%3==0:
        count=(n//3)*2
    else:
        count=((n//3)*2)+(n%3)
    print((count)*x)
