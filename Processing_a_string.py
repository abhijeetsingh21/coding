for i in range(int(input())):
    st= input()
    arr=[]
    for j in range(len(st)):
        if st[j].isdigit():
            arr.append(int(st[j]))

    print(sum(arr))       