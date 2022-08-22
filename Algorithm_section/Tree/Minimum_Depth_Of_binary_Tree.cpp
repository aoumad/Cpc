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
    int minDepth(TreeNode* root)
    {
        if (root == NULL)
            return (0);
        int rtn_l = minDepth(root->left);
        int rtn_r = minDepth(root->right);
        if (rtn_l == 0)
            return (rtn_r + 1);
        else if (rtn_r == 0)
            return (rtn_l + 1);
        return (min(rtn_l, rtn_r) + 1);
    }
};