# User function Template for python3

class Solution:
    #Function to find equilibrium point in the array.
    def findEquilibrium(self, arr):
        # code here
        n=len(arr)
        totalSum=sum(arr)
        leftSum=0
        
        for i in range(n):
            totalSum-=arr[i]
            if leftSum==totalSum:
                return i
            leftSum+=arr[i]
        return -1

