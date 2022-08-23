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
    TreeNode*   tmp;
    TreeNode* invertTree(TreeNode* root) 
    {
        if (root == NULL)
            return (root);
        if (root->left == NULL && root->right == NULL)
            return (root);
        invertTree(root->left);
        invertTree(root->right);
        tmp = root->left;
        root->left = root->right;
        root->right = tmp;
        return (root);
    }
};