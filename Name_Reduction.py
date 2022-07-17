for i in range(int(input())):
    a,b = map(str,input().split())
    A = a+b
    arr = []
    for j in range(int(input())):
        c_name = input()
        arr.append(c_name)
    s= ''.join([str(n) for n in arr])
    check = all(items in A for items in s)
    if check is True:
        print("YES")
    else:
        print("NO")
    