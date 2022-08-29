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
    vector<string> arr;
    
    void    generator(TreeNode* root, string str)
    {
        if (root->left == NULL && root->right == NULL)
        {
            str += to_string(root->val);
            arr.push_back(str);
        }
        else
        {
            str += to_string(root->val) + "->";
            if (root->left)
                generator(root->left, str);
            if (root->right)
                generator(root->right, str);
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root)
    {
        if (root == NULL)
            return (vector<string>());
        string str;
        generator(root, str);
        return (arr);
    }
};