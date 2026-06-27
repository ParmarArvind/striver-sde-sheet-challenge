class Solution {
public:
//method -1: brute force tc =o(n^2) sc=(1)
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(1LL*(nums[i]+nums[j]) == 1LL*target ) return {i,j};
            }
        }
        return {-1,-1};
    }
};

class Solution {
public:
    //method -2 
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++) arr.push_back({nums[i],i});

        sort(arr.begin(),arr.end());
        int i=0 , j=n-1;
        while(i<j)
        {
            if(1LL*(arr[i].first+arr[j].first) == 1LL*target) return {arr[i].second,arr[j].second};
            else if(1LL*(arr[i].first+arr[j].first) <1LL*target) i++;
            else j--;
        }
        return {-1,-1};
    }
};

class Solution {
public:
    //method 3
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            long long need=1LL*(target-nums[i]);
            if(mp.find(need)!=mp.end()) return {i,mp[need]};
            mp[nums[i]]=i;
        }

        return {-1,-1};
    }
};