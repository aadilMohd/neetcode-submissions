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

     bool dfs(TreeNode* p, TreeNode * q){
       if (!p && !q) {
            return true;
        }
        if (p && q && p->val == q->val) {
            return dfs(p->left, q->left) && dfs(p->right, q->right);
        } else {
            return false;
        }
     }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if(!root) return false;

        if(root->val == subRoot->val){
            if(dfs(root,subRoot)) return true;
        }

        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);


        

        


        
    }
};
