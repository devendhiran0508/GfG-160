#include <numeric>

class Solution {
  public:
    bool checkPages(vector<int> &arr, int k, long long pagelimit) {
        int cnt = 1;
        long long pageSum = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (pageSum + arr[i] > pagelimit) {
                cnt += 1;
                pageSum = arr[i];
            }
            else {
                pageSum += arr[i];
            }
        }
        return (cnt <= k);
    }
    
    int findPages(vector<int> &arr, int k) {
        // code here
        if (k > arr.size())
            return -1;
        
        long long lo = *max_element(arr.begin(), arr.end());
        long long hi = accumulate(arr.begin(), arr.end(), 0LL);
        
        int res = -1;
        
        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            
            if (checkPages(arr, k, mid)) {
                res = int(mid);
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }
        }
        return res;
    }
};
