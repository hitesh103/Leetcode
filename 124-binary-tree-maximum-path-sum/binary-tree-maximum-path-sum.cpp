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
    int ans = INT_MIN; // Initialize ans with smallest possible integer

    int postOrder(TreeNode* root){
        if(root == nullptr) return 0;

        int leftSum = max(0, postOrder(root->left)); // Ensure negative sums are not considered
        int rightSum = max(0, postOrder(root->right)); // Ensure negative sums are not considered

        int pathSum = root->val + leftSum + rightSum; // Calculate the sum considering current node
        ans = max(ans, pathSum); // Update ans if the current path sum is greater

        return root->val + max(leftSum, rightSum); // Return the maximum sum achievable starting from the current node
    }

    int maxPathSum(TreeNode* root) {
        postOrder(root);
        return ans;
    }
};
