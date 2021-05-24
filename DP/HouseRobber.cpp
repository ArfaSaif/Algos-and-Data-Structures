class Solution {
public:
    int rob(vector<int>& nums) {
        // amount of money reached till get to point i
        int* dp = new int[nums.size()];

         if(nums.size() == 1)
            return nums[0];
        //1. base cases
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
       // from base case to end of array
        for(int i = 2; i < nums.size(); i++)
        {
            // optimization function
            dp[i] = max(nums[i] + dp[i-2], dp[i-1]);
        }

        return dp[nums.size()-1];




    }
};
