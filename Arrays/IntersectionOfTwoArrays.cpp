class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());


        vector<int> ans;
        if(nums2.size()<nums1.size()){

            for(int i = 0; i < nums2.size(); i++)
            {
                vector<int>::iterator it = find(nums1.begin(), nums1.end(), nums2[i]);
                if(it != nums1.end())
                {

                        ans.push_back(nums2[i]);
                        nums1.erase(it);
                }
            }
        }
        else{
            for(int i = 0; i < nums1.size(); i++)
            {
                vector<int>::iterator it= find(nums2.begin(), nums2.end(), nums1[i]);
                if( it!= nums2.end())
                {

                        ans.push_back(nums1[i]);
                    nums2.erase(it);
                }
            }
        }


        return ans;






    }
};
