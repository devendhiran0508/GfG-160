class Solution {
  public:
    int hIndex(vector<int>& citations) {
        // code here
        int n = citations.size();
        vector<int> freq(n + 1);
        
        for (int cit: citations) {
            if (cit > n) {
                freq[n]++;
            }
            else {
                freq[cit]++;
            }
        }
        
        int idx = n;
        int s = freq[n];
        
        while (s < idx) {
            idx--;
            s += freq[idx];
        }
        return idx;
    }
};
