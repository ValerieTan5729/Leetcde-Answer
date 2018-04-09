// Runtime: 42ms
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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        // Overlap by rules if both nodes aren't nullptr
        if (t1 != NULL && t2 != NULL) { 
            struct TreeNode * root = new TreeNode(t1->val + t2->val);
            // Use recursion to get the corresponding left child and right child
            root->left = mergeTrees(t1->left, t2->left); 
            root->right = mergeTrees(t1->right, t2->right);
            return root;
        } else if (t1 == NULL && t2 != NULL) {
            return t2;
        } else if (t1 != NULL && t2 == NULL) {
            return t1;
        } else {
            return NULL;
        }
    }
};