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
    
    TreeNode* Trim(TreeNode* root, int min, int max){
         
        if(root == NULL)
            return NULL;
        
        root->left = trimBST(root->left, min, max);
        root->right = trimBST(root->right, min, max);
        
        if(root->val < min){
            TreeNode *rChild = root->right;
            delete root;
            return rChild;
        }
        
         if(root->val > max){
            TreeNode *lChild = root->left;
            delete root;
            return lChild;
        }
        
        return root;
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root == NULL)
            return NULL;
       TreeNode* root1 = Trim(root, low, high);
        return root1;
    }
    
