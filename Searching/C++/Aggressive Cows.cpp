class Solution {
  public:
    
    bool check(vector<int> &arr, int k, int dist) {
        int cnt = 1;
        int prev = arr[0];
        
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - prev >= dist) {
                prev = arr[i];
                cnt++;
            }
        }
        return (cnt >= k);
    }
    
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        int res= 0;
        int lo = 1;
        int hi = arr.back() - arr[0];
        
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            
            if (check(arr, k, mid)) {
                res = mid;
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }
        return res;
    }
};
