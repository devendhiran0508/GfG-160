class Solution:
	def twoSum(self, arr, target):
		# code here
		s = set()
		
		for num in arr:
		    comp = target - num
		    if comp in s:
		        return True
		    s.add(num)
	    return False
