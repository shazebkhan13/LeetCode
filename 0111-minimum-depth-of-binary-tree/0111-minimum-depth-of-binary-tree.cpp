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
    int minDepth(TreeNode* root) {
        int ans=INT_MAX,level=0;
        if(!root) return level;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            level++;
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode *r=q.front();
                q.pop();
                if(!r->left&&!r->right) ans=min(ans,level);
                if(r->left) q.push(r->left);
                if(r->right) q.push(r->right);
            }
        }
        return ans;
    }
};