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
    int sum = 0;
    void fnc(TreeNode* root, int& sum, string bin) {
        bin.push_back('0' + root->val); // Append '0' or '1' based on node value
        if (!root->left && !root->right) {
            sum += bitset<32>(bin).to_ulong(); // Increase bitset size to 32 for larger inputs
        }
        if (root->left)  fnc(root->left, sum, bin);
        if (root->right) fnc(root->right, sum, bin);
        bin.pop_back(); // Remove the last character after the recursive call returns
    }

    int sumRootToLeaf(TreeNode* root) {
        string bin = "";
        if (root) fnc(root, sum, bin);
        return sum;
    }
};

