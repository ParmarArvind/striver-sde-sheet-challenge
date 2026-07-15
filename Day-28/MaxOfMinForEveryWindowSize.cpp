class Solution {
  public:
    void findNSL(vector<int>&arr ,vector<int>&NSL)
    {
        stack<int>st;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(st.empty()) {
                NSL[i]=-1;
            }
            else{
                while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();

                if(st.empty()) NSL[i]=-1;
                else NSL[i]=st.top();
            }
            st.push(i);
        }
    }
    void findNSR(vector<int>&arr ,vector<int>&NSR){
        stack<int>st;
        int n=arr.size();
        for(int i=n-1;i>=0;i--)
        {
            if(st.empty()) {
                NSR[i]=n;
            }
            else{
                while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();

                if(st.empty()) NSR[i]=n;
                else NSR[i]=st.top();
            }
            st.push(i);
        }
    }
    
    vector<int> maxOfMins(vector<int>& arr) {
        int n=arr.size();
        vector<int>NSL(n);
        vector<int>NSR(n);
        
        findNSR(arr,NSR);
        findNSL(arr,NSL);
        
        vector<int>result(n,0);
        for(int i=0;i<n;i++)
        {
            int windowSize=NSR[i]-NSL[i]-1;
            result[windowSize-1] = max(result[windowSize-1] , arr[i]);
        }
        
        for(int i=n-2;i>=0;i--)
            result[i]=max(result[i] , result[i+1]);
        
        return result;
    }
};