class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum = 0, minSum = 0;
        int currMax = 0, currMin = 0;

        for (int n : nums) {
            currMax = max(n, currMax + n); // Kadane for max
            currMin = min(n, currMin + n); // Kadane for min

            maxSum = max(maxSum, currMax);
            minSum = min(minSum, currMin);
        }

        return max(maxSum, abs(minSum));
    }
};