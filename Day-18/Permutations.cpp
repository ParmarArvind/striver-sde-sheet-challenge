//method -1 tc=O(n*n!) , sc=O(n) recursion stack space  + O(n) space for unordered_set and curr vector
class Solution {
public:
    int n;  
    void solve(vector<int>& nums ,unordered_set<int>&st,vector<int>& curr,vector<vector<int>>& result)
    {
        if(curr.size()==n) 
        {
            result.push_back(curr);
            return ;
        }

        for(int i=0;i<n;i++)
        {
            if(st.count(nums[i]) ) continue;
            curr.push_back(nums[i]);
            st.insert(nums[i]);

            solve(nums,st,curr, result);
            curr.pop_back();
            st.erase(nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
         n=nums.size();
        vector<int>curr;
        vector<vector<int>>result;
        unordered_set<int>st;
        solve(nums,st,curr,result);

        return result;

    }
};


class Solution {
public:
    //method -2 tc=O(n*n!) , sc=O(n) recursion stack space
    void solve(vector<int>&nums , vector<vector<int>>&result ,int idx)
    {
        if(idx==nums.size())
        {
            result.push_back(nums);//the curr ele arrangement in nums
            return ;
        }

        for(int i=idx ;i<nums.size();i++)
        {
            //swap the ith ele with the idxth ele
            swap(nums[i] ,nums[idx]);

            solve(nums,result,idx+1);
            // re-swap
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result;

        solve(nums,result, 0);

        return result;
    }
};