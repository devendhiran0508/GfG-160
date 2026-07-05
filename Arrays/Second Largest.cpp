class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        if (n < 2)
            return -1;
        int first = -1;
        int second = -1;
        for (int num : arr) {
            if (num > first) {
                second = first;
                first = num;
            }
            else if (num > second && num != first) {
                second = num;
            }
        }
        if (second == -1) {
            return -1;
        }
        else {
            return second;
        }
    }
};
