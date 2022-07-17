for i in range(int(input())):
    x,y=map(int,input().split())
    l1=str(input())
    count=0
    maxdays=0
    ans=0
    for i in range(30):
        if l1[i]=='1':
            ans+=x
            count+=1
        else:
            maxdays=max(count,maxdays)
            count=0    
    maxdays=max(count,maxdays)
    ans +=maxdays *y    
    print(ans)    