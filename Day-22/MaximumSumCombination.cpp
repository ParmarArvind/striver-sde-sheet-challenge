class Solution {
  public:
    vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
        // code here
        vector<int>result;
        
        sort(a.rbegin(),a.rend());
        sort(b.rbegin() ,b.rend());
        
        priority_queue<tuple<int,int,int>>pq;
        set<pair<int,int>>st;
        
        pq.push({a[0]+b[0] , 0 ,0}); // sum , i,j
        st.insert({0,0}); //mark as visited
        
        while(k-- && !pq.empty())
        {
            auto [sum,i,j]=pq.top(); 
            pq.pop();
            
            result.push_back(sum);
            
            if(i+1<a.size() && !st.count({i+1,j}) ) {
                pq.push({a[i+1]+b[j] , i+1,j});
                st.insert({i+1 ,j });
            }
            
            if(j+1<b.size() && !st.count({i,j+1})){
                pq.push({a[i]+b[j+1],i,j+1});
                st.insert({i, j+1});
            }
        }
        
        return result;
    }
};