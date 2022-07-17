a,n,k=map(int,input().split())
arr=[0]*100
j=0
if n!=0:
    while a>n:
        rem=a%(n+1)
        arr[j]=rem
        a//=(n+1)
        j+=1
    arr[j]=a
for i in range(k):
    print(arr[i],end=" ")        