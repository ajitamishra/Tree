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
    vector<int>v;
    void helper(TreeNode* root,int level)
    {
        if(root==NULL)
            return;
        if(v.size()<level)
        v.push_back(root->val);
        helper(root->right,level+1);
        helper(root->left,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
       helper(root,1);
        return v;
    }
};