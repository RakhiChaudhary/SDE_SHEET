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
     int count=0;
    void help(TreeNode* node,int val){
       
        if(node==NULL)
            return;
        
        if(node->val>=val){
            count++;
            val=node->val;
        }
        
        help(node->left,val);
        help(node->right,val);
        
    }
    int goodNodes(TreeNode* root) {
      
        help(root,root->val);
        return count;
    }
};