class Solution:
    def nonRepeatingChar(self,s):
        #code here
        maxChar=26
        visit=[-1]*maxChar
        
        for i in range(len(s)):
            index=ord(s[i])-ord('a')
            if visit[index]==-1:
                visit[index]=i
            else:
                visit[index]=-2
        
        idx=-1
        
        for i in range(maxChar):
            if visit[i]>=0 and (idx==-1 or visit[i]<visit[idx]):
                idx=i
        
        return '$' if idx==-1 else s[visit[idx]]
    
