def migratoryBirds(arr):
    count=[0]*5
    for i in arr:
        count[i]+=1
    return count.index(max(count))    
    
arr=[1 , 4 , 4 , 4 , 5 ,3]
print(migratoryBirds(arr))   