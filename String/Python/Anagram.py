class Solution:
    def areAnagrams(self, s1, s2):
       # code here
        if len(s1)!=len(s2):
           return False
        
        charCount={}
        for ch in s1:
            charCount[ch]=charCount.get(ch,0)+1
        for ch in s2:
            charCount[ch]=charCount.get(ch,0)-1
        
        for val in charCount.values():
            if val!=0:
                return False
        return True
    
# can use frequency array method also same as hashmap
