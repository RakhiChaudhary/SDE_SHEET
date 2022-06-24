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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
  int preStart = 0, preEnd = postorder.size() - 1;
  int inStart = 0, inEnd = inorder.size() - 1;

  map < int, int > mp;
  for (int i = inStart; i <= inEnd; i++) {
    mp[inorder[i]] = i;
  }

  return constructTree(postorder, preStart, preEnd, inorder, inStart, inEnd, mp);
    }
    
    
TreeNode * constructTree(vector < int > & postorder, int preStart, int preEnd, vector 
 < int > & inorder, int inStart, int inEnd, map < int, int > & mp) {
  if (preStart > preEnd || inStart > inEnd) return NULL;

  TreeNode* root = new TreeNode(postorder[preEnd]);
  int elem = mp[root -> val];
  int nElem = elem - inStart;

  root -> left = constructTree(postorder, preStart, preStart + nElem-1, inorder,
  inStart, elem - 1, mp);
  root -> right = constructTree(postorder, preStart + nElem , preEnd-1, inorder, 
  elem + 1, inEnd, mp);

  return root;
}
};