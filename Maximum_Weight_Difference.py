for i in range(int(input())):
    n,k=map(int,input().split())
    arr=list(map(int,input().split()))
    arr.sort()
    arr1=arr[:k]
    arr2=arr[k:]
    print(abs(sum(arr1)-sum(arr2))) 