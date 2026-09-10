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
    vector<int> fun(TreeNode* r,int& ans){
        if(!r) return {0,0};
        vector<int> lef=fun(r->left,ans),rig=fun(r->right,ans);
        if((lef[0]+r->val+rig[0])/(lef[1]+1+rig[1])==r->val) ans++;
        return {lef[0]+r->val+rig[0],lef[1]+1+rig[1]};
    }
    int averageOfSubtree(TreeNode* root) {
        int ans=0;
        fun(root,ans);
        return ans;
    }
};