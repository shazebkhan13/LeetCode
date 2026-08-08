class Node{
public:
    int val,mini;
    Node *next;
    Node(int x){
        val=x;
        mini=x;
        next=NULL;
    }
};
class MinStack {
public:
    Node *t;
    MinStack() {
        t=NULL;
    }
    
    void push(int value) {
        if(!t) t=new Node(value);
        else{
            Node *temp=new Node(value);
            temp->mini=min(t->mini,value);
            temp->next=t;
            t=temp;
        }
    }
    
    void pop() {
        Node *temp=t;
        t=t->next;
        delete temp;
    }
    
    int top() {
        return t->val;
    }
    
    int getMin() {
        return t->mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */