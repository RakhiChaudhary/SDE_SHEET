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
    unordered_set<int>s;
    bool findTarget(TreeNode* root, int k) {
        if(!root)
            return false;
        if(s.find(k-root->val)!=s.end())
         return true;
        s.insert(root->val);
        bool l=findTarget(root->left,k);
        bool r=findTarget(root->right,k);
       return l||r;  
    }
};