/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * };
 */
class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy = new TreeNode(-1); // Dummy node to maintain the head of the modified tree
        TreeNode* prev = dummy; // Previous pointer to track the previous node during traversal
        
        inOrderTraversal(root, prev); // Perform in-order traversal
        
        return dummy->right; // Return the modified tree's head
    }
    
    // Recursive in-order traversal function
    void inOrderTraversal(TreeNode* root, TreeNode*& prev) {
        if (!root) return;
        
        inOrderTraversal(root->left, prev); // Traverse left subtree
        
        // Modify the tree structure
        prev->right = root;
        root->left = nullptr;
        prev = root;
        
        inOrderTraversal(root->right, prev); // Traverse right subtree
    }
};
