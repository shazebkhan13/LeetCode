class BusBooking {
public:
    vector<vector<int>> rows,cost;
    int totalTime,minTime;
    BusBooking(int n) {
        rows.assign(n,vector<int>(4,0));
        cost.assign(n,vector<int>(4,0));
        totalTime=0,minTime=0;
    }
    
    void toggle(string seat) {
        char c=seat[0];
        int r=stoi(seat.substr(1))-1;
        if(rows[r][c-'A']){
            rows[r][c-'A']=0;
            minTime--,totalTime-=cost[r][c-'A'];
            cost[r][c-'A']=0;
        }
        else{
            rows[r][c-'A']=1;
            if((c=='A'&&rows[r][1])||(c=='D'&&rows[r][2])){
                totalTime+=2;
                cost[r][c-'A']+=2;
            }
            minTime++,totalTime++,cost[r][c-'A']++;
        }
    }
    
    int getTotalTime() {
        return totalTime;
    }
    
    int getMinTime() {
        return minTime;
    }
};

/**
 * Your BusBooking object will be instantiated and called as such:
 * BusBooking* obj = new BusBooking(n);
 * obj->toggle(seat);
 * int param_2 = obj->getTotalTime();
 * int param_3 = obj->getMinTime();
 */