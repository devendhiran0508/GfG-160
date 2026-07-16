class Solution:
    def hIndex(self, citations):
        #code here
        n = len(citations)
        freq = [0] * (n + 1)
        
        for cit in citations:
            if cit > n:
                freq[n] += 1
            else:
                freq[cit] += 1
        
        idx = n
        s = freq[n]
        
        while s < idx:
            idx -= 1
            s += freq[idx]
        return idx
