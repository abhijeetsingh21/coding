for i in range(int(input())):
    arr = [97,101,105,111,117]
    count = 1
    x=int(input())
    st = input()
    for j in range(len(st)):
        for k in arr:
            if ord(j)!= k:
                count+=1
                break
            