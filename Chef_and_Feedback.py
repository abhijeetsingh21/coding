for i in range(int(input())):
    x=str(input())
    flag=False
    if '101' in x or '010' in x:
        flag=True
    if flag ==True :
        print("Good")
    else:
        print("Bad")    

