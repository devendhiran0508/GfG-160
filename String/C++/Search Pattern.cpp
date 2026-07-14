class Solution {
  public:
  
    void constructLPS(string &pat, vector<int> &lps) {
        int len_ = 0;
        int m = pat.length();
        lps[0] = 0;
        int i = 1;
        
        while (i < m) {
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
    }
    vector<int> search(string &pat, string &txt) {
        // code here
        int n = txt.length();
        int m = pat.length();
        vector<int> lps(m);
        vector<int> res;
        constructLPS(pat, lps);
        
        int i = 0; int j = 0;
        while (i < n) {
            if (txt[i] == pat[j]) {
                i++;
                j++;
                
                if (j == m) {
                    res.push_back(i - j);
                    j = lps[j - 1];
                }
            }
            else {
                if (j != 0) {
                    j = lps[j - 1];
                }
                else {
                    i++;
                }
            }
        }
        return res;
    }
};
