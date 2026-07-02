class Solution {
public:
    // method 1 Backtracking + set to skip duplicates
    // TC: O(2^n * logn) , SC= O(2^n )
    void solve(vector<int>&nums, set<vector<int>>&st ,vector<int>&temp , int i)
    {
        if(i>= nums.size()) {
            st.insert(temp);
            return ;
            }
        // skip curr ele
        solve(nums,st,temp,i+1);

        temp.push_back(nums[i]);//do
        solve(nums,st,temp,i+1);
        temp.pop_back();//undo

        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin() ,nums.end());
        
        vector<int>temp;
        set<vector<int>>st;

        solve(nums,st ,temp ,0);

        vector<vector<int>>result;

        for(auto &vec:st)
        result.push_back(vec);

        return result;
        
    }
};

class Solution {
public:
    // method 2 Backtracking + skip duplicates
    // TC: O(2^n * nlogn) , SC= O(n)
    void solve(vector<int>&nums,vector<vector<int>>&result ,vector<int>&temp , int idx)
    {
        result.push_back(temp);
        for(int i=idx;i<nums.size() ;i++) 
        {
            if(i>idx && nums[i]==nums[i-1]) continue;

            temp.push_back(nums[i]);//do
            solve(nums,result,temp,i+1);
            temp.pop_back();//undo
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin() ,nums.end());
        vector<int>temp;

        vector<vector<int>>result;
        
        solve(nums ,result, temp ,0);
        return result;
    }
};