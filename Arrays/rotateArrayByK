class Solution {
public:
    void rotate(vector<int>& nums, int k) {


        vector<int> numsTwo;


        for(int i = 0; i < nums.size(); i++)
        {
            numsTwo.push_back(nums[i]);



        }
        for(int i = 0; i < nums.size(); i++)
        {
           nums[(i+k) % nums.size()] = numsTwo[i];
        }




    }
};
