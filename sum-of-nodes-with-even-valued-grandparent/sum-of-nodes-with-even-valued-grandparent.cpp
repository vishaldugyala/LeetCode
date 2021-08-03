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
    vector<TreeNode*> evenNode;
    int sumEvenGrandparent(TreeNode* root) {
        inorderTraversal(root);
        
        int sol = 0;
        
        for(auto x:evenNode)
        {
            if(x->left != NULL)
            {
                if(x->left->left != NULL)
                    sol += x->left->left->val;
                if(x->left->right != NULL)
                    sol += x->left->right->val;
            }
            if(x->right != NULL)
            {
                if(x->right->left != NULL)
                    sol += x->right->left->val;
                if(x->right->right != NULL)
                    sol += x->right->right->val;
            }
        }
        return sol;
    }
    void inorderTraversal(TreeNode* root)
    {
        if(root == NULL)
           return;
        
        inorderTraversal(root->left);
        if(root->val%2 ==0)
            evenNode.push_back(root);
        inorderTraversal(root->right);
    }
};