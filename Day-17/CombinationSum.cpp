class Solution {
public:
    void solve(vector<int>& candidates, vector<vector<int>>&result, vector<int>&temp,int target, int idx)
    {
        if(target<0) return ;
        if(idx>= candidates.size())
        {
            if(target==0) result.push_back(temp);
            return ;
        }

        // take curr candidate
        temp.push_back(candidates[idx] );
        solve(candidates,result, temp, target-candidates[idx], idx);
        temp.pop_back();

        // skip curr candidate
        solve(candidates , result ,temp, target, idx+1);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>temp;
        solve(candidates,result, temp,target, 0);
        return result;
    }
};