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
    int sum = 0;    
    void    generator(TreeNode* root, bool flag)
    {
        if (root == NULL)
            return ;
        if (root->left == NULL && root->right == NULL && flag == true)
            sum += root->val;
        generator(root->left, true);
        generator(root->right, false);
    }
    
    int sumOfLeftLeaves(TreeNode* root) 
    {
        if (root == NULL)
            return (0);
        generator(root, false);
        return (sum);
    }
};