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
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr)
            return true;
        return isMirror(root->left, root->right);
    }

    bool isMirror(TreeNode *left_root, TreeNode *right_root){
        if(left_root == nullptr && right_root == nullptr)
            return true;
        if(left_root == nullptr || right_root == nullptr)
            return false;
        return left_root->val == right_root->val && isMirror(left_root->left,right_root->right) && isMirror(left_root->right, right_root->left);
    }

};