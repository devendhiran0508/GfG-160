class Solution:
    def reverseArray(self, arr):
        # code here
        n=len(arr)
        for i in range(n//2):
            temp=arr[i]
            arr[i]=arr[n-1-i]
            arr[n-1-i]=temp
        return arr
        
///////////////////////////////

class Solution:
    def reverseArray(self, arr):
        # code here
        left = 0
        right = len(arr) - 1
        
        while left < right:
            arr[left], arr[right] = arr[right], arr[left]
            left += 1
            right -= 1
        
        
        
