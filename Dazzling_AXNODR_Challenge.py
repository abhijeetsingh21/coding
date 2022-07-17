for i in range(int(input())):
    b = 1
    x= int(input())
    if x%4==0:
        print(x+3)
    elif (x-1)%4==0:
        print(x)
    elif ((x-2)%4==0 or (x-3)%4==0):
        print(3)