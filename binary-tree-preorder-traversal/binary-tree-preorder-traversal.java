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
    public List<Integer> preorderTraversal(TreeNode root) {
        
        List<Integer> sol = new ArrayList<>();
        if(root != null)
        {
            sol.add(root.val);
            preOrder(sol,root.left);
            preOrder(sol,root.right);
        } 
        return sol;
    }
    public void preOrder(List<Integer> sol,TreeNode root)
    {
        if(root != null)
        {
            sol.add(root.val);
            preOrder(sol,root.left);
            preOrder(sol,root.right);
        }
      
        return;
    }
}