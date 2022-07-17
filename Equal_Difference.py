import statistics
from traceback import print_tb
for i in range(int(input())):
    n=int((input()))
    ar=list(map(int,input().split()))
    dic={}
    max = 0
    res=ar[0]
    for j in ar:
        if j in dic:
            dic[j]+=1
        else:
            dic[j] = 1
    # lis=dic.values()
    maxi=max((max(dic[key])for key in dic))
   
    if n==2 or n==1:
        print("0")
    elif n>2 and res==1:
        print(n-2)
    else:
        print(n-res)
      