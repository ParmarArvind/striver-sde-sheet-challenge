class Solution {
public:
    void solve(vector<int>& candidates, vector<vector<int>>&result, vector<int>&temp,int target, int idx)
    {
        if(target==0){
            result.push_back(temp);
            return ;
        }
        if(target<0) return;
        
        for(int i=idx;i<candidates.size();i++)
        {
            if(i>idx && candidates[i]==candidates[i-1]) continue;
            // take curr candidate
            temp.push_back(candidates[i] );
            solve(candidates,result, temp, target-candidates[i], i+1);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin() ,candidates.end());

        vector<vector<int>>result;
        vector<int>temp;
        solve(candidates,result, temp,target, 0);

        return result;
    }
};