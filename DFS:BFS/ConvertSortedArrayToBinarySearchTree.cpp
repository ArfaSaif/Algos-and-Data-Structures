/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {

        // A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.

        int start = 0;
        int end = nums.size() - 1;


        return helper(start, end, nums);



    }

    TreeNode * helper(int start, int end, vector<int>&nums)
    {
        //Base Case ******
        if(start> end) return NULL;

        // find middle
        int middle = (start + end)/ 2;

            TreeNode * root = new TreeNode(nums[middle]);

        //middle - 1
            root->left = helper(start, middle - 1, nums);
        // middle + 1
            root->right = helper(middle+1, end, nums);

        return root;

    }





};
