class Node{
    public:
    int val;
    Node *next,*prev;
    Node(int x){
        val=x;
        prev=next=NULL;
    }
};
class CustomStack {
public:
    int size,cur;
    Node *top,*bottom;
    CustomStack(int maxSize) {
        cur=0;
        size=maxSize;
        top=bottom=NULL;
    }
    
    void push(int x) {
        if(cur==size) return;
        if(!top) top=bottom=new Node(x);
        else{
            Node *temp=new Node(x);
            temp->next=top;
            top->prev=temp;
            top=temp;
        }
        cur++;
    }
    
    int pop() {
        if(!top) return -1;
        Node *temp=top;
        top=top->next;
        if(top) top->prev=NULL;
        else bottom=NULL;
        cur--;
        return temp->val;
    }
    
    void increment(int k, int x) {
        Node *temp=bottom;
        for(int i=0;i<min(k,cur);i++){
            temp->val+=x;
            temp=temp->prev;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */