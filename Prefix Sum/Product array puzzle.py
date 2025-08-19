#User function Template for python3

class Solution:
    def productExceptSelf(self, arr):
        #code here
        zero=0
        idx=-1
        pro=1
        
        for i in range(len(arr)):
            if arr[i]==0:
                zero+=1
                idx=i
            else:
                pro*=arr[i]
        res=[0]*len(arr)
        if zero==0:
            for i in range(len(arr)):
                res[i]=pro//arr[i]
        elif zero==1:
            res[idx]=pro
        return res
