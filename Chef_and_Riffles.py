for i in range(int(input())):
    arr=[]
    n,k=map(int,input().split())
    for j in range(1,n+1):
        arr.append(j)
    arr1=[]
    for t in range(k):
        if t%2==0:
            for l in range(0,len(arr),2):
                arr1.append(arr[l])
            for m in range(1,len(arr),2):
                arr1.append(arr[m])
            arr.clear()
        else:
            for v in range(0,len(arr1),2):
                arr.append(arr1[v])
            for w in range(1,len(arr1),2):
                arr.append(arr1[w])
            arr1.clear()
    if k%2==0:  
        for t1 in range(len(arr)):
            print(arr[t1],end=" ")     
        print()           
    else:
        for t2 in range(len(arr1)):
            print(arr1[t2],end=" ")                
        print()