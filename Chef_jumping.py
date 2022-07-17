n=int(input())
temp = (n+6)//6
ter=(6*temp-6)

if abs(n-ter)==0 or abs(n-ter)==1 or abs(n-ter)==3:
    print("yes")
else:
    print("no")