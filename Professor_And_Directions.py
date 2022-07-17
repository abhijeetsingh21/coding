for i in range(int(input())):
    n=int(input())
    st=str(input())
    arr1=[]
    arr2=[]
    for j in range(n-1):
        if st[j]=='L' and st[j+1]=='L':
            print("YES")
            break
        elif st[j]=='R' and st[j+1]=='R':
            print("YES")
            break
    else:
        print("NO")    
         