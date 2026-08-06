/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(!head) return head;
        stack<Node*> st;
        Node *cur=head,*pre=NULL;
        while(cur){
            if(cur->child){
                st.push(cur);
                cur=cur->child;
            }
            else{
                pre=cur;
                cur=cur->next;
            }
        }
        while(!st.empty()){
            Node *fut=st.top()->next;
            st.top()->child->prev=st.top();
            st.top()->next=st.top()->child;
            st.top()->child=NULL;
            if(fut) fut->prev=pre;
            pre->next=fut;
            while(pre->next) pre=pre->next;
            st.pop();
        }
        return head;
    }
};