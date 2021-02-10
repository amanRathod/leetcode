
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
    private:
    int curr_sum = 0;
public:
    void greater(TreeNode* root){
        
        if(!root) return;
        
        if(root->right) greater(root->right);
        root->val = (curr_sum += root->val);
        if(root->left) greater(root->left);
        
        
    }
    
    TreeNode* convertBST(TreeNode* root) {
        
        greater(root);
        return root;
    }
};
