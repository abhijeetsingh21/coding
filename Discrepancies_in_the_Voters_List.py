n1,n2,n3=map(int,input().split())
arr1=[]
arr2=[]
arr3=[]
arr4=[]
for i in range(n1):
    x1=int(input())
    arr1.append(x1)
for j in range(n2):
    x2=int(input())
    arr2.append(x2)
for k in range(n3):
    x3=int(input())
    arr3.append(x3)
for t1 in range(len(arr1)):
    check1=any(item in arr1 for item in arr2)
    if check1== True:
        arr4.append(arr1[t1])
for t2 in range(len(arr2)):
    check2=any(item in arr2 for item in arr3)
    if check2== True:
        arr4.append(arr2[t2])
for t3 in range(len(arr1)):
    check3=any(item in arr1 for item in arr3)
    if check3== True:
        arr4.append(arr1[t3])


# for r in range(len(arr4)):    
    # print(arr4[r],end=" ")

o=len(arr4) !=len(set(arr4))
print(o)