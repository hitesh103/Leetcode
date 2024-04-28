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
    int low, high;
    TreeNode* recurse(TreeNode* node){
        if(node == nullptr) return node;

        if(node->val < low){
            return recurse(node->right);
        }
        else if(node->val > high){
            return recurse(node->left);
        }
        else if(node->val >= low && node->val <= high){
            node->left = recurse(node->left);
            node->right = recurse(node->right);
        }
        return node;
    }
    TreeNode* trimBST(TreeNode* root, int Low, int High) {
        low = Low, high = High;
        return recurse(root);
    }
};