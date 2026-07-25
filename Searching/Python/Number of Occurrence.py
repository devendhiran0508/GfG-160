class Solution:
    def countFreq(self, arr, target):
        # code here
        l = bisect_left(arr, target)
        r = bisect_right(arr, target)
        return r - l
