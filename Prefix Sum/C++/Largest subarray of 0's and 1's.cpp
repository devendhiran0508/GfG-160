class Solution {
	public:
	int maxLen(vector<int> &arr) {
		// Your code here
		unordered_map<int, int> mp;
		int res = 0;
		int preSum = 0;
		
		for (int i = 0; i< arr.size(); i++) {
		    preSum += (arr[i] == 0) ? -1 : 1;
		    
		    if (preSum == 0)
		        res = i + 1;
		    if (mp.find(preSum) != mp.end())
		        res = max(res, i - mp[preSum]);
		    else
		        mp[preSum] = i;
		}
		return res;
	}
};
