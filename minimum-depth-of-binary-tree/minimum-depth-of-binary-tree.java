/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int solve(TreeNode root, int ans) {
        if(root == null) return Integer.MAX_VALUE;
        if(root.left == null && root.right == null) return ans;
        return Math.min(solve(root.left, ans+1), solve(root.right, ans+1));
    }
    public int minDepth(TreeNode root) {
        return root==null?0:solve(root, 0)+1;
    }
}