class Solution:
    def maxCircularSum(self, arr):
        # code here
        totalSum = 0;
        currMax = 0;
        currMin = 0;
        maxSum = arr[0]
        minSum = arr[0]
        
        for i in range(len(arr)):
            currMax = max(currMax + arr[i], arr[i])
            maxSum = max(maxSum, currMax)
            
            currMin = min(currMin + arr[i], arr[i])
            minSum = min(minSum, currMin)
            
            totalSum += arr[i]
        normalSum = maxSum
        cirSum = totalSum - minSum
        
        if minSum == totalSum:
            return normalSum
        return max(cirSum, normalSum)
