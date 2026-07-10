class Solution:
    def getMinDiff(self, arr, k):
        # code here
        n = len(arr)
        arr.sort()
        res = arr[n - 1] - arr[0]
        
        for i in range(n):
            if arr[i] - k < 0:
                continue
            minH = min(arr[0] + k, arr[i] - k)
            maxH = max(arr[i - 1] + k, arr[n - 1] - k)
            res = min(res, maxH - minH)
        return res
