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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        k_small(root, k, v);
        return v[k-1];
    }
    void k_small(TreeNode* root, int k, vector<int>& v){
        
        if(root->left != NULL)
            k_small(root->left, k, v);
        v.push_back(root->val);
        if(root->right != NULL)
            k_small(root->right, k, v);
        return;
    }
};
