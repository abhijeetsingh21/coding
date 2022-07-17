for i in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    m=max(l)
    for k in range(len(l)):
        count=1
        for t in range(len(l)+1):
            if l[k]==l[t] and k!=t:
                count+=1
                get=l[k]
        if count>2:
            print('-1')
            
        elif count==1:
            l1=sorted(l,reverse=True)
            for r in range(len(l1)):
                print(l1[r],end=" ")
            break