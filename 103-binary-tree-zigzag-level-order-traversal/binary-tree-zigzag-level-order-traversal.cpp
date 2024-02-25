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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == nullptr) return {};
        bool flag = true;
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        ans.push_back({root->val});
        while(!q.empty()){
            vector<int> level;
            int len = q.size();
            for(int i=0;i<len;i++){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->right != nullptr){
                    q.push(temp->right);
                    level.push_back(temp->right->val);
                }
                if(temp->left != nullptr){
                    q.push(temp->left);
                    level.push_back(temp->left->val);
                }
            }
            if(!flag)
            reverse(level.begin(),level.end());
            if(level.size() > 0) ans.push_back(level);
            flag = !flag;
        }
        return ans;
    }
};