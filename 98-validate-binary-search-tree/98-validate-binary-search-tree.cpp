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
    
    bool helper(TreeNode* root,long long int mi,long long int ma){
    if(!root) return true;
    if(root->val<=mi or root->val>=ma) return false;
    return helper(root->left,mi,root->val) and helper(root->right,root->val,ma);
}
    
    bool isValidBST(TreeNode* root) {
        return helper(root,-1e18,1e18);
    }
    
   /* bool helper(TreeNode* root,long long mi,long long mx){
        if(root==NULL)
            return true;
        if(root->val>=mx && root->val<=mi)
            return false;
        
        return helper(root->left,mi,root->val) && helper(root->right,root->val,mx);
    }*/
};

/*bool helper(TreeNode* root,ll mi,ll ma){
    if(!root) return true;
    if(root->val<=mi or root->val>=ma) return false;
    return helper(root->left,mi,root->val) and helper(root->right,root->val,ma);
}
bool isValidBST(TreeNode* root) {
    
    return helper(root,-inf,inf);
}*/