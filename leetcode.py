############## COINS Problem (DP)    #########

# import math as mt
# def minCoins(n,coins,j,arr):

#     if n==0:
#         return 0
#     if arr[n-1] !=0:
#         return arr[n]
#     y = mt.inf 

#     for k in range(j):
#         if n-coins[k]>=0:
#             subpropb = minCoins(n-coins[k],coins,j,arr)
#             y = min(y,subpropb+1)
#     return y



# n = int(input())
# coins = [1,7,10]
# arr= [0]*n
# result = minCoins(n,coins,len(coins),arr)

# print(result)

################   kth largest element   ##############


# nums = [3,2,1,5,6,4]
# nums = [3,2,3,1,2,4,5,5,6]
# k = 4
# arr=sorted(nums)
# t = len(arr)-k
# print(arr[t])

# import statistics as st

# nums1 = [1,3]
# nums2 = [2]
# arr= nums1+nums2
# arr.sort()
# # print(arr)
# med = float(st.median(arr))
# print(round(med,5))
# # x = round(5.1, 2)
# # print(x)


#######  MAXIMUM SUBARRAY sum  ###############

# import math as mt

# def maxSubArray(nums):
#         maxi = -mt.inf
#         sum = 0
    
#         for i in nums:
#             sum+= i
#             maxi = max(sum,maxi)
#             if sum<0:
#                 sum = 0
#         return maxi

# nums = [-2,1,-3,4,-1,2,1,-5,4]

# ans = maxSubArray(nums)
# print(ans)

######################     Stairs Climbing     ##################
    
# def f(n,dp):
#     if n == 0 :
#         return 1
#     if n ==1 :
#         return 1
#     if dp[n-1] != -1:
#         return dp[n]
#     total= f(n-1,dp) + f(n-2,dp)

#     return total
    
# n = int(input())

# dp = [-1]*n
# ans = f(n,dp)
# print(ans)






# def f(s,length,arr,ind):
#     if ind == length :
#         return 1
#     # if dp[length-1] != -1:
#     #     return dp[length-1]
#     arr.append(s[ind-1])
#     f(s,length,arr,ind+1)
#     arr.remove(s[ind-1])
#     f(s,length,arr,ind+1)

    

# s = "aab"
# arr =[]
# length = len(s)
# # dp=[-1]*length
# ans = f(s,length,arr,0)
# print(ans)


# import math as mt



# h = 5
# w = 4
# horizontalCuts =  [1,2,4]
# verticalCuts = [1,3]

# horizontalCuts.sort()
# verticalCuts.sort()

# horMax = -mt.inf
# verMax = -mt.inf


# if len(horizontalCuts) >1 :

#     for i in range(len(horizontalCuts)-1):

#         if (abs(horizontalCuts[i]-horizontalCuts[i+1])) > horMax :

#             horMax = abs(horizontalCuts[i]-horizontalCuts[i+1])

        
# else :
#     horMax = horizontalCuts[0]

# if len(verticalCuts) >1 :

#     for j in range(len(verticalCuts)-1):
#         if (abs(verticalCuts[j]-verticalCuts[j+1])) > verMax :

#             verMax = abs(verticalCuts[j]-verticalCuts[j+1])
# else :
#     verMax = verticalCuts[0]


# print(horMax)
# print(verMax)
# print((horMax)*(verMax))


def f(i,arr,nums,sum,store):
    if i==0 :
        return nums[i]
    store.append(nums[i])
    f(i-1,arr1,nums,sum,store)

    store.remove(nums[i])

    f(i-1,arr1,nums,sum,store)

    return arr1


nums = [-1,0,1,2,-1,-4]
arr1 =[0]*len(nums)
sum =0
i=len(nums)
store =[]
ans = f(i-1,arr1,nums,sum,store)

print(ans)