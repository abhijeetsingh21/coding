for i in range(int(input())):
    n,k,v = map(int,input().split())
    arr = list(map(int,input().split()))
    x = (v*(n+k)-sum(arr))//k
    if x>0  and (v*(n+k)-sum(arr))%k==0:
        print(x)
    else:
        print('-1')