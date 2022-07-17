for i in range(int(input())):
    x,y,k,n=map(int,input().split())
    l=[]
    m=[]
    for v in range(n):
        p,c=map(int,input().split())
        l.append(p)
        m.append(c)
    fin=False
    t=x-y 
    for r in range(n):

        if m[r]<=k:
            if t<=l[r]  :
                fin=True
                break
    if fin==True    :
        print("LuckyChef")
    else:
        print("UnluckyChef")