for i in range(int(input())):
    sides = int(input())
    ans=sides*sides
    if sides%2==0 :
        for j in range(2,sides):
            if j%2==0:
                ans+=j*j
    else:
        for k in range(1,sides):
            if k%2!=0:
                ans+=k*k
    print(ans)