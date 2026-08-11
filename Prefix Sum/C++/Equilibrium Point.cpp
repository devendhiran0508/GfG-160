class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int prefSum = 0;
        int total = accumulate(arr.begin(), arr.end(), 0);
        
        for (int i = 0; i < arr.size(); i++) {
            int sufSum = total - prefSum - arr[i];
            if (prefSum == sufSum)
                return i;
            prefSum += arr[i];
        }
        return -1;
    }
};
