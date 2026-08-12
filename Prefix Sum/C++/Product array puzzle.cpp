class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> preProduct(n), sufProduct(n), res(n);
        preProduct[0] = 1;
        
        for (int i = 1; i < n; i++) {
            preProduct[i] = arr[i - 1] * preProduct[i - 1];
        }
        
        sufProduct[n - 1] = 1;
        for (int j = n - 2; j >= 0; j--) {
            sufProduct[j] = arr[j + 1] * sufProduct[j + 1];
        }
        
        for (int i = 0; i < n; i++) {
            res[i] = preProduct[i] * sufProduct[i];
        }
        return res;
    }
};
