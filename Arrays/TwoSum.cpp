class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // vector<int> difference;
        vector <int> ans;
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     difference.push_back( target - nums[i]);
        // }

        for(int j = 0; j< nums.size(); j++)
        {
            vector<int>:: iterator it = find(nums.begin() + j+1, nums.end(), target - nums[j]);

            if(it != nums.end())
            {
                ans.push_back(j);
                cout<<*it;
                int index = it - nums.begin();
                cout<<index;
                ans.push_back(index);
                break;
            }
        }
        return ans;
    }
};


// better solution:

// make hash map for index mapping for the nums[i] - NOT THE COMPLEMENT
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

      unordered_map<int, int> hmap;
    vector<int> ans;

        for(int i = 0; i < nums.size(); i ++)
        {
            int complement = target - nums[i];
            unordered_map<int,int>::iterator it = hmap.find(complement);
            if( it == hmap.end()){
                hmap.insert(make_pair(nums[i], i));
                cout<<"couldn't find complement "<< complement;
            }
            else
            {

                ans.push_back(i);
                int ind = it->second;
                ans.push_back(ind);
            }
        }

        return ans;
    }
};
