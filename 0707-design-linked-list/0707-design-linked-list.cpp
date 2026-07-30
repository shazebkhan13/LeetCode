class MyLinkedList {
public:
    class Node{
        public:
        int val;
        Node *next,*prev;
        Node(int x){
            val=x;
            next=prev=NULL;
        }
    };
    int size;
    Node *head,*tail;
    MyLinkedList() {
        head=tail=NULL;
        size=0;
    }
    
    int get(int index) {
        if(index>=size) return -1;
        Node *cur=head;
        while(index--) cur=cur->next;
        return cur->val;
    }
    
    void addAtHead(int val) {
        if(!head) head=tail=new Node(val);
        else{
            Node *temp=new Node(val);
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
        return;
    }
    
    void addAtTail(int val) {
        if(!head) head=tail=new Node(val);
        else{
            Node *temp=new Node(val);
            temp->prev=tail;
            tail->next=temp;
            tail=temp;
        }
        size++;
        return;
    }
    
    void addAtIndex(int index, int val) {
        if(index>size) return;
        else if(index==0){
            if(!head) head=tail=new Node(val);
            else{
                Node *temp=new Node(val);
                temp->next=head;
                head->prev=temp;
                head=temp;
            }
        }
        else if(index==size){
            Node *temp=new Node(val);
            temp->prev=tail;
            tail->next=temp;
            tail=temp;
        }
        else{
            Node *cur=head;
            while(index--) cur=cur->next;
            Node *temp=new Node(val);
            temp->next=cur;
            temp->prev=cur->prev;
            cur->prev->next=temp;
            cur->prev=temp;
        }
        size++;
        return;
    }
    
    void deleteAtIndex(int index) {
        if(index>=size) return;
        else if(index==0){
            if(!head->next){
                delete head;
                head=tail=NULL;
            }
            else{
                Node *temp=head;
                head=head->next;
                head->prev=NULL;
                delete temp;
            }
        }
        else if(index==size-1){
            Node *temp=tail;
            tail=tail->prev;
            tail->next=NULL;
            delete temp;
        }
        else{
            Node *cur=head;
            while(index--) cur=cur->next;
            cur->prev->next=cur->next;
            cur->next->prev=cur->prev;
            delete cur;
        }
        size--;
        return;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */