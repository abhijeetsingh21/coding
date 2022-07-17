for i in range(int(input())):
    a,b = map(int,input().split())
    l = list(map(int,input().split()))
    l.sort()
    b = min(l)
    print(l[b])
    