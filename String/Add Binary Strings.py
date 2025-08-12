#User function Template for python3
class Solution:
    def removeLeadingZero(self,s):
        firstOne=s.find('1')
        return s[firstOne:] if firstOne!=-1 else "0"
        
	def addBinary(self, s1, s2):
		# code here
		s1=self.removeLeadingZero(s1)
		s2=self.removeLeadingZero(s2)
		n=len(s1)
		m=len(s2)
		
		if n<m:
		    s1,s2=s2,s1
		    n,m=m,n
	    carry=0
	    res=[]
	    j=m-1
	    
	    for i in range(n-1,-1,-1):
	        bit1=int(s1[i])
	        bitSum=bit1+carry
	        
	        if j>=0:
	            bit2=int(s2[j])
	            bitSum+=bit2
	            j-=1
	        bit=bitSum%2
	        carry=bitSum//2
	        res.append(str(bit))
	    if carry>0:
	        res.append('1')
	   
	    return ''.join(res[::-1])
