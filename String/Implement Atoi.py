class Solution:
    def myAtoi(self, s):
        # Code here
        sign=1
        n=len(s)
        res=0
        idx=0
        
        while idx<n and s[idx]==" ":
            idx+=1
        
        if idx<n and (s[idx]=='+' or s[idx]=='-'):
            if s[idx]=='-':
                sign=-1
            idx+=1
        while idx<n and '0' <=s[idx]<='9':
            digit=ord(s[idx])-ord('0')
            res=res*10+digit
            
            if res>2**31-1:
                return (2**31-1) if sign==1 else -2**31
            idx+=1
        return res*sign
