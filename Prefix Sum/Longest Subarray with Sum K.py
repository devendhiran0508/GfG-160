class Solution:
    def longestSubarray(self, arr, k):  
        # code here
        mp={}
        res=0
        preSum=0
        
        for i in range(len(arr)):
            preSum+=arr[i]
            if preSum==k:
                res=i+1
            elif (preSum-k) in mp:
                res=max(res,i-mp[preSum-k])
            if preSum not in mp:
                mp[preSum]=i
        return res
    
