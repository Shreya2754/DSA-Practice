class Solution {
public:
    int maxProduct(vector<int>& nums) {
    //using kadanes algorithm
    int ans1 = INT_MIN;
    int prod = 1;
    int n = nums.size();

    //for 0 to n
    for(int i = 0; i<n; i++){
        prod *= nums[i];
        ans1 = max(ans1, prod);
        if(prod == 0) prod = 1;
    }

    //for n to 0
    prod = 1;
    for(int i = n-1; i>=0; i--){
        prod *= nums[i];
        ans1 = max(ans1, prod);
         if(prod == 0) prod = 1;
    }

    return ans1;
    }
};