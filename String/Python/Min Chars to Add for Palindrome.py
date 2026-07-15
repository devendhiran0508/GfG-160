class Solution:
    def computeLPS(self,pat):
        n = len(pat)
        lps = [0] * n
        len_ = 0
        i = 1
        
        while i < n:
            if pat[i] == pat[len_]:
                len_ += 1
                lps[i] = len_
                i += 1
            else:
                if len_ != 0:
                    len_ = lps[len_ - 1]
                else:
                    lps[i] = 0
                    i += 1
        return lps 
        
        
    def minChar(self, s):
        # code here
        n = len(s)
        rev = s[::-1]
        s = s + "$" + rev
        lps = self.computeLPS(s)
        return n - lps[-1]

