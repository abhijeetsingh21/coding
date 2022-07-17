for i in range(int(input())):
    m,n=map(int,input().split())
    for j in range(m,n+1):
        flag=True
        if j==1:
            continue
        else:
            for k in range(2,(j//2)+1):
                if j%k==0:
                    flag=False
                    break
        if flag==True:
            print(j)
    print()