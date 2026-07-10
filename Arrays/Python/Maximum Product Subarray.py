class Solution:
	def maxProduct(self,arr):
		# code here
		n = len(arr)
		
		maxProd = float('-inf')
		left = 1
		right = 1
		
		for i in range(n):
		    if left == 0:
		        left = 1
		    if right == 0:
		        right = 1
		    left *= arr[i]
		    j = n - i - 1
		    right *= arr[j]
		    maxProd = max(left, right, maxProd)
	    return maxProd
