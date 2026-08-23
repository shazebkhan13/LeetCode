/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void traverse(Node *r,vector<int>& arr){
        if(!r) return;
        arr.push_back(r->val);
        for(auto i:r->children) traverse(i,arr);
    }
    vector<int> preorder(Node* root) {
        vector<int> ans;
        traverse(root,ans);
        return ans;
    }
};