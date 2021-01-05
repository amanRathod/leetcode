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

// LevelBase store value upto that level in a tree excluding present Node
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        if(root == NULL)
            return 0;
      return SUM(root);
    }
  int SUM(TreeNode* root, int levelbase = 0){
     if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL){
    return levelbase + root->val;
    }
    
    int presentbase = (levelbase + root->val)*10;
    
      int leftsum = SUM(root->left, presentbase);
     int rightsum = SUM(root->right, presentbase);
    
    return leftsum + rightsum;
   
   
  }
};
