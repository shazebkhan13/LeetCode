class BrowserHistory {
public:
    class ListNode{
        public:
        string val;
        ListNode *next,*prev;
        ListNode(string x):val(x),next(NULL),prev(NULL){};
    };
    ListNode *head,*cur;
    BrowserHistory(string homepage) {
       head=cur=new ListNode(homepage);
    }
    void visit(string url) {
        cur->next=new ListNode(url);
        cur->next->prev=cur;
        cur=cur->next;
    }
    
    string back(int steps) {
        while(cur->prev && steps--) cur=cur->prev;
        return cur->val;
    }
    
    string forward(int steps) {
        while(cur->next && steps--) cur=cur->next;
        return cur->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */