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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
       TreeNode* root=bst_util(nullptr,preorder[0]);
       for(int i=1;i<preorder.size();i++)
       {
           bst_util(root,preorder[i]);
       }
    return root;
                  
    }
    
    
    TreeNode* bst_util(TreeNode* root,int val)
{
    if(root==nullptr)
    {
        return new TreeNode(val);
    }
    
    if(root->val<val)
       root->right=bst_util(root->right,val);
    if(root->val>val)
        root->left=bst_util(root->left,val);
        
    return root;
}

};



     