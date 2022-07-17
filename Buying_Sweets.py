for i in range(int(input())):
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    x=sum(l)
    total=x//k
    l.sort()
    l.pop(0)
    if sum(l)//k == total :
        print("-1")
    else:
        print(total) 