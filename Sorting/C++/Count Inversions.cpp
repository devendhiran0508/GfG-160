class Solution {
  public:
    int countInv(vector<int>& arr, int l, int r) {
        int res = 0;
        if (l < r) {
            int m = (l + r)/2;
            res += countInv(arr, l, m);
            res += countInv(arr, m + 1, r);
            res += countAndMerge(arr, l, m, r);
        }
        return res;
    }
    
    int countAndMerge(vector<int>& arr, int l, int m, int r) {
        int n1 = m - l + 1;
        int n2 = r - m;
        vector<int> left(n1), right(n2);
        for (int i = 0; i < n1; i++) {
            left[i] = arr[i + l];
        }
        for (int j = 0; j < n2; j++) {
            right[j] = arr[m + 1 + j];
        }
        int res = 0;
        int  i = 0; int  j = 0; int k = l;
        
        while (i < n1 && j < n2) {
            if (left[i] <= right[j]) {
                arr[k] = left[i];
                i++;
            }
            else {
                arr[k] = right[j];
                j++;
                res += (n1 - i);
            }
            k++;
        }
        
        while (i < n1) {
            arr[k] = left[i];
            i++;
            k++;
        }
        while (j < n2) {
            arr[k] = right[j];
            j++;
            k++;
        }
        return res;
    }
  
    int inversionCount(vector<int> &arr) {
        // code here
        int n = arr.size();
        return countInv(arr, 0, n - 1);
    }
};
