class Solution {
  public:
  // method -1 TC=O(n*logn) SC=O(n)
    void sortStack(stack<int> &st) {
        // code here
        
        vector<int>temp;
        while(!st.empty())
        {
            temp.push_back(st.top());
            st.pop();
        }
        
        sort(temp.begin(),temp.end());
        
        for(int i=0;i<temp.size() ;i++)
        {
            st.push(temp[i]);
        }
    }
};


// method -2 TC=O(n^2) SC=O(n)
class Solution {
  public:
    void sortStack(stack<int> &st) {
        // code here
        stack<int>temp;
        while(!st.empty())
        {
            int curr=st.top();
            st.pop();
            
            while(!temp.empty() && temp.top()>curr)
            {
                st.push(temp.top());
                temp.pop();
            }
            
            temp.push(curr);
        }
        
        st=temp;
    }
};