class Solution:
    def missingNum(self, arr):
        # code here
        res=0
        n=len(arr)+1
        
        for i in range(n-1):
            res=res^arr[i]
        for i in range(1,n+1):
            res=res^i
        return res
