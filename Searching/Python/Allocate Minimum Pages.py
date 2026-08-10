class Solution:
    def checkPages(self, arr, k, pagelimit):
        cnt = 1
        pageSum = 0
        for pages in arr:
            if pageSum + pages > pagelimit:
                cnt += 1
                pageSum = pages
            else:
                pageSum += pages
        return cnt <= k
        
    def findPages(self, arr, k):
        # code here
        if k > len(arr):
            return -1
        lo = max(arr)
        hi = sum(arr)
        res = -1
        
        while lo <= hi:
            mid = lo + (hi - lo) // 2
            if self.checkPages(arr, k, mid):
                res = mid
                hi = mid - 1
            else:
                lo = mid + 1
        return res
    
