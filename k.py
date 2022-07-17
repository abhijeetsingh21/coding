import math as mt
x = int(input())
list1 = []
area1 = []
for i in range(x):
    list = []
    for j in range(3):
        y = int(input())
        list.append(y)
    for k in range(3):
        p = (list[0]+list[1]+list[2]) /2
        area = mt.sqrt(p*(p-list[0])*(p-list[1])*(p-list[2]))
    list1.append(list)    
    area1.append(area)

for k in range(x):
    print(area1[k])
    print(list1[k])
    print()
def sort(area1):
    for j in range(len(area1)-1,0,-1):
        for l in range(j):
            if area1[l]>area1[l+1]:
                x = area1[l]
                area1[l] = area1[l+1]
                area1[l+1] = x
    
sort(area1)
for i in range(x):
    print('%.2f' %area1[i])    