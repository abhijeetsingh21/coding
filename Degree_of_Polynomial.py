for i in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))
    ans = 0
    max_ = 0
    for j in range(1,len(arr)):
        if arr[j] !=0 :
            max_= arr[j]
            ans = j
    print(ans)