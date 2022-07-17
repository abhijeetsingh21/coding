import math as mt
count = 0
for i in range(int(input())):
    x1, y1, x2, y2, x3, y3 = map(int, input().split())
    if mt.sqrt((x1-x3) ^ 2 + (y1-y3) ^ 2) == mt.sqrt((x1-x2) ^ 2 + (y1-y2) ^ 2) + mt.sqrt((x2-x3) ^ 2+(y2-y3) ^ 2):
        count += 1
    elif mt.sqrt((x2-x3) ^ 2+(y2-y3) ^ 2) == mt.sqrt((x1-x3) ^ 2 + (y1-y3) ^ 2) + mt.sqrt((x1-x2) ^ 2 + (y1-y2) ^ 2):
        count += 1
    elif mt.sqrt((x1-x2) ^ 2 + (y1-y2) ^ 2) == mt.sqrt((x2-x3) ^ 2+(y2-y3) ^ 2) + mt.sqrt((x1-x3) ^ 2 + (y1-y3) ^ 2):
        count += 1
print(count)
