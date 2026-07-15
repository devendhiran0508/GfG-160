class Solution:
    def areRotations(self, s1, s2):
        # code here
        n = len(s1)
        for _ in range(n):
            if s1 == s2:
                return True
            s1 = s1[-1] + s1[:-1]
        return False
