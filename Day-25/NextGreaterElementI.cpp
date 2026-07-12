class Solution {
public:
    //method -1 TC=O(nums1.length * nums2.length) SC=O(1)
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>result(n,-1);
        for(int i=0;i<n;i++)
        {
            bool isFound=false;
            for(int j=0;j<m;j++)
            {
                if(nums1[i]==nums2[j]) isFound=true;
                if(isFound && nums2[j]>nums1[i]){
                    result[i]=nums2[j];
                    break;
                }
            }
        }

        return result;
    }
};


class Solution {
public:
    //method -2 TC=O(nums1.length + nums2.length) SC=O(nums2.length)
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>result(n,-1);

        unordered_map<int,int>mp;
        stack<int>st;
        st.push(nums2[m-1]);
        mp[nums2[m-1]]=-1;
        for(int j=m-2;j>=0;j--)
        {
            while(!st.empty() && st.top()<=nums2[j]) st.pop();

            if(st.empty()) mp[nums2[j]]=-1;
            else{
                mp[nums2[j]]=st.top();
            }
            st.push(nums2[j]);
        }

        for(int i=0;i<n;i++)
        {
            result[i]=mp[nums1[i]];
        }

        return result;
    }
};