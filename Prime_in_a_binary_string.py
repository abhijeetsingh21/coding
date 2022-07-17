for i in range(int(input())):
    x=input()
    l=len(x)
    if l==1:
        print("No")
        continue
    count=0
    temp= -1
    i=0
    while i<l:
        if x[i]=='1':
            count+=1
            temp =i+1
        i+=1

    if count==0 :
        print("No")
    else:
        print("Yes")
