for i in range(int(input())):
    l, r = map(int, input().split())
    count = 0
    for j in range(l, r+1):
        a = j % 10
        if a == 2:
            count += 1
        elif a == 3:
            count += 1
        elif a == 9:
            count += 1
    print(count)
