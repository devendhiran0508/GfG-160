class Solution {
  public:
  
    vector<int> computeLPS(string &pat) {
        int n = pat.length();
        vector<int> lps(n);
        lps[0] = 0;
        int len_ = 0;
        int  i =1;
        while (i < n) {
            if (pat[i] == pat[len_]) {
                len_ += 1;
                lps[i] = len_;
                i++;
            }
            else {
                if (len_ != 0) {
                    len_ = lps[len_ - 1];
                }
                else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }
    
    int minChar(string &s) {
        // code here
        int n = s.length();
        string rev = s;
        reverse(rev.begin(), rev.end());
        s = s + "\$" + rev;
        vector<int> lps = computeLPS(s);
        return n - lps.back();
    }
};
