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
    bool checkBST(TreeNode* node, long left, long right) {
        if(!node) return true;
        
        if(!((left < node->val) && (node->val < right))) return false;
        
        return checkBST(node->left, left, node->val) && checkBST(node->right, node->val, right);
    }
    
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        
        return checkBST(root->left, LONG_MIN, root->val) && checkBST(root->right, root->val, LONG_MAX);
    }
};