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
    int rtn = 0;
    int helper(TreeNode* node)
    {
        if (node == NULL)
            return (rtn);
        int rtn_l = helper(node->left);
        int rtn_r = helper(node->right);
        if (rtn_l == -1 || rtn_r == -1 || abs(rtn_l - rtn_r) > 1)
            return (-1);
        return (max(rtn_l, rtn_r) + 1);
    }
    
    bool isBalanced(TreeNode* root) 
    {
        if (root == NULL)
            return (true);
        return (helper(root) != -1);
    }
};