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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        return createBST(nums, 0, nums.size()-1);
    }
    
   TreeNode* createBST(vector<int>& nums, int left, int right)
    {
        if(right<left)
            return nullptr;
        if(left== right)
        {
            TreeNode* tree = new TreeNode(nums[left]);
            return tree;
        }
        int mid = left + (right- left)/2;
        TreeNode* tree = new TreeNode(nums[mid]);
        tree ->left = createBST(nums,left,mid-1);
        tree->right = createBST(nums,mid+1,right);
        return tree;
    }
};


/* TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        return solveHelper(nums, 0, nums.size()-1);
    }
    
    TreeNode* solveHelper(vector<int>& nums, int left, int right)
    {
        if(left > right) return NULL;
        int midpoint = left + (right-left)/2;
        TreeNode* root = new TreeNode(nums[midpoint]);
        
        root->left = solveHelper(nums, left, midpoint-1);
        root->right = solveHelper(nums, midpoint+1, right);
        
        return root;
    }*/