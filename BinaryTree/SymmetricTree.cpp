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
    bool isSymmetric(TreeNode* root) {
        return checkSymmetric(root,root);
    }

    bool checkSymmetric(TreeNode* leftN, TreeNode* rightN)
    {
      // 1. Base Cases
        if(leftN == NULL && rightN == NULL)
            return true;
        if(leftN == NULL || rightN == NULL)
            return false;

        // 2. check self
        // 3. check the left and the right to be 
        return (leftN->val == rightN->val) && checkSymmetric(leftN->left, rightN->right) && checkSymmetric(leftN->right, rightN->left);

    }

};
