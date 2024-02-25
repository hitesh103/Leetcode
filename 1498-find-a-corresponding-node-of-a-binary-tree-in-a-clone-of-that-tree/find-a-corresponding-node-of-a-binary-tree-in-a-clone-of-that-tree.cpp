/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:

    TreeNode* ans;

    void postOrder(TreeNode* node,TreeNode* target){
        if(node == nullptr) return ;

        postOrder(node->left,target);
        postOrder(node->right,target);

        if(node->val == target->val) ans = node;

        return ;

    }

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        ans = nullptr;
        postOrder(cloned,target);
        return ans;
    }
};