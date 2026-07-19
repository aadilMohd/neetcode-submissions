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
    int maxDepth(TreeNode* root) {

        if(root==NULL){
            return 0;
        }
        queue<pair<TreeNode*,int>> q;

      

        q.push({root,0});

        int c=0;

        while(!q.empty()){

            TreeNode* x= q.front().first;
            int cc=q.front().second;
            q.pop();

            if(x){

                if(x->left) q.push({x->left,cc+1});
                if(x->right) q.push({x->right,cc+1});
            }
            c=cc+1;
        }

        
        return c;
    }
};
