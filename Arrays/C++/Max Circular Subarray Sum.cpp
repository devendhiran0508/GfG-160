class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        // code here
        int totalSum = 0;
        int currMax = 0;
        int currMin = 0;
        int maxSum =arr[0];
        int minSum = arr[0];
        
        for (int i = 0; i < arr.size(); i++) {
            currMax = max(currMax + arr[i], arr[i]);
            maxSum = max(maxSum, currMax);
            
            currMin = min(currMin + arr[i], arr[i]);
            minSum = min(minSum, currMin);
            
            totalSum +=arr[i];
        }
        int normalSum = maxSum;
        int cirSum = totalSum - minSum;
        
        if (minSum == totalSum) {
            return normalSum;
        }
        return max(normalSum, cirSum);
    }
};
