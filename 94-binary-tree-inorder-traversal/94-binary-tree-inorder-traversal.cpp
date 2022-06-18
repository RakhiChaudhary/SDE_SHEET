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
    vector<int> inorderTraversal(TreeNode* root) {
    /*    vector<int>v;
        helper(root,v);
        return v;*/
        
        vector<int>inorder;
        stack<TreeNode*>st;
        while(true){
          if(root!=NULL){
            st.push(root);
              root=root->left;
          }
            else
            {
                if(st.empty())
                    break;
                root=st.top();
                st.pop();
                inorder.push_back(root->val);
                root=root->right;
            }
        }
        return inorder;
    }
    
   /* void helper(TreeNode* root,vector<int>&v){
        if(root==NULL)
            return;
            
            helper(root->left,v);
            v.push_back(root->val);
            helper(root->right,v);
        */
    
};