n,d= map(int,input().split())
arr=[]
for i in range(n):
    arr.append(int(input()))
count = 0
for j in range(n-1):
    for k in range(j+1,n):
        if abs(arr[j]-arr[k])<=2:
            count+=1
    break        
    print(count) 
