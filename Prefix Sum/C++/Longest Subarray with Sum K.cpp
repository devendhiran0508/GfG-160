class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int> mp;
        int res = 0 ;
        int preSum = 0;
        for (int i = 0; i < arr.size(); i++) {
            preSum += arr[i];
            
            if (preSum == k)
                res = i + 1;
            else if (mp.find(preSum - k) != mp.end())
                res = max(res, i - mp[preSum - k]);
            
            if (mp.find(preSum) == mp.end())
                mp[preSum] = i;
        }
        return res;
    }
};
