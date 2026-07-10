class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int n = arr.size();
        int maxProd = INT_MIN;
        int left = 1;
        int  right = 1;
        
        for (int i = 0; i < n; i++) {
            if (left == 0)
                left = 1;
            if (right == 0)
                right = 1;
            left *= arr[i];
            int j = n - i - 1;
            right *= arr[j];
            maxProd = max({left, right, maxProd});
        }
        
        return maxProd;
    }
};
