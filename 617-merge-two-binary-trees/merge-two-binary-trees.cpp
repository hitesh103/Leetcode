class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == nullptr && root2 == nullptr)
            return nullptr;

        if(root1 == nullptr)
            return root2;
        if(root2 == nullptr)
            return root1;

        // Create a new TreeNode with the sum of root1 and root2 values
        TreeNode* root = new TreeNode(root1->val + root2->val);
        // Recursively merge the left and right subtrees
        root->left = mergeTrees(root1->left, root2->left);
        root->right = mergeTrees(root1->right, root2->right);

        return root;
    }
};
