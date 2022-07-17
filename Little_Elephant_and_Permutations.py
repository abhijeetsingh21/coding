for n in range(int(input())):
    a = int(input())
    arr= list(map(int,input().split()))[:a]
    count1 = 0
    for i in range(a-1):
        for j in range(i+1,a):
            if arr[i]>arr[j]:
                count1+=1
    count2 = 0
    for l in range(a-1):
        if arr[l]>arr[l+1] :
            count2+=1
    if count1 == count2:
        print("YES")
    else:
        print("NO")