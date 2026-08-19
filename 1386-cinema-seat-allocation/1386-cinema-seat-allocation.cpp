class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& res) {
        unordered_set<int> st;
        unordered_map<int,bool> arr;
        for(auto i:res){
            i[0]--,i[1]--;
            st.insert(i[0]);
            arr[i[0]*10+i[1]]=true;
        }
        int ans=0,cnt=0;
        for(auto i:st){
            for(int j=1;j<5;j++){
                if(!arr[i*10+j]) cnt++;
                else break;
                arr[i*10+j]=true;
            }
            if(cnt==4) ans++;
            cnt=0;
            for(int j=3;j<7;j++){
                if(!arr[i*10+j]) cnt++;
                else break;
                arr[i*10+j]=true;
            }
            if(cnt==4) ans++;
            cnt=0;
            for(int j=5;j<9;j++){
                if(!arr[i*10+j]) cnt++;
                else break;
                arr[i*10+j]=true;
            }
            if(cnt==4) ans++;
            cnt=0;
        }
        ans+=(n-st.size())*2;
        return ans;
    }
};