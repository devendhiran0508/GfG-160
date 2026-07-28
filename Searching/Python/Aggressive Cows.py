class Solution:
    def check(self, arr, k, dist):
        cnt = 1
        prev = arr[0]
        
        for i in range(1, len(arr)):
            if arr[i] - prev >= dist:
                prev = arr[i]
                cnt += 1
        return cnt >= k
    
    def aggressiveCows(self, arr, k):
        # code here
        arr.sort()
        res = 0
        
        lo = 1
        hi = arr[-1] - arr[0]
        while lo <= hi:
            mid = lo + (hi - lo) // 2
            
            if self.check(arr, k, mid):
                res = mid
                lo = mid + 1
            else:
                hi = mid - 1
        return res
        
