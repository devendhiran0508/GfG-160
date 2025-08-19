#User function Template for python3
class Solution:
    def findDuplicate(self, arr):
        #code here
        n=len(arr)
        res=0
        for i in range(n-1):
            res=res^(i+1)^arr[i]
        res=res^arr[n-1]
        return res
