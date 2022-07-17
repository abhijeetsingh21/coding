for i in range(int(input())):
    n,m,k=map(int,input().split())
    l1=list(map(int,input().split()))
    cl=l1[:m]
    for p in l1:
        if l1[p]==1:
            print(100)
            break
    t=m    
    for j in cl:
        if cl[j]==1:
            
