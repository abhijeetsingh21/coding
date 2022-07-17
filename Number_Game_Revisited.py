for i in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    arr1=list(dict.fromkeys(arr))
    print(len(arr1))    