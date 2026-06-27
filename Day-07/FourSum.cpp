class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin() ,nums.end());
        vector<vector<int>>result;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i-1]==nums[i]) continue;
            for(int j=i+1;j<n;j++)
            {
                if(j>i+1 && nums[j-1]==nums[j]) continue;
                int left=j+1;
                int right=n-1;
                long long newTarget=(long long)target-nums[i]-nums[j];
                while(left<right)
                {
                    if(1LL*(nums[left]+nums[right] )== newTarget)
                    {
                        result.push_back({nums[i],nums[j],nums[left],nums[right]});

                        while(left<right && nums[left]==nums[left+1]) left++;
                        while(left<right && nums[right]==nums[right-1]) right--;

                        left++ , right--;
                    } else if(1LL*(nums[left]+nums[right]) < newTarget) left++;
                    else right--; 
                }
            }
        }
        return result;
    }
};