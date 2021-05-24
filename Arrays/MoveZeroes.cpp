class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroElement = 0;
        int i = 0;
        // swap nonZeroElement with zero element
        while(i != nums.size()){
            if(nums[i] == 0){
                nonZeroElement = i;
                for(int k = i+1; k <nums.size(); k++){
                    if(nums[k] != 0){
                        //swap
                        nums[nonZeroElement] = nums[k];
                        nums[k] = 0;
                        break;
                    }
                }
            }


            i++;

        }
    }
};
