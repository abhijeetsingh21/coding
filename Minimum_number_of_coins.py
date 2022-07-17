for i in range(int(input())):
    x=int(input())
    count=0
    count1=0
    total=0
    if x%5==0:
        if x%10==0:
            count=x//10
        else:
            count=x//10
            count1=(x-count*10)//5
    total=count+count1
    if count*10+count1*5==x:
        print(total)
    else:
        print("-1")