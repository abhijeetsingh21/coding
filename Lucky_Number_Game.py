for i in range(int(input())):
    n,bob,alice=map(int,input().split())
    n1=list(map(int,input().split()))
    b=0
    a=0
    com=0
    for j in n1:
        if j%bob==0 and j%alice==0:
            com+=1
        elif j%bob==0:
            b+=1
        elif j%alice==0:
            a+=1
    if com>0:
        b+=1
    if b>a:
        print("BOB")
    else:
        print("ALICE")
