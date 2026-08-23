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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<long long> pq;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            long long sum=0;
            for(int i=0;i<n;i++){
                TreeNode *r=q.front();
                q.pop();
                sum+=r->val;
                if(r->left) q.push(r->left);
                if(r->right) q.push(r->right);
            }
            pq.push(sum);
        }
        if(k>pq.size()) return -1;
        while(--k) pq.pop();
        return pq.top();
    }
};