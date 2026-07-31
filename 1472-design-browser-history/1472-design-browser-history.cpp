class BrowserHistory {
public:
    class ListNode{
        public:
        string val;
        ListNode *next,*prev;
        ListNode():val(""),next(NULL),prev(NULL){};
        ListNode(string x):val(x),next(NULL),prev(NULL){};
    };
    ListNode *head,*tail;
    BrowserHistory(string homepage) {
        head=tail=new ListNode(homepage);
    }
    void visit(string url) {
        tail->next=new ListNode(url);
        tail->next->prev=tail;
        tail=tail->next;
    }
    
    string back(int steps) {
        while(steps--) if(tail->prev) tail=tail->prev;
        return tail->val;
    }
    
    string forward(int steps) {
        while(steps--) if(tail->next) tail=tail->next;
        return tail->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */