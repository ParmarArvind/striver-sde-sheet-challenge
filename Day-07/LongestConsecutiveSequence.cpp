class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(); if(n==0) return 0;
        int result=0; count=0;
        //min heap
        priority_queue<int ,vector<int> ,greater<int>>pq;
        for(int num:nums) pq.push(num);
        int prev=pq.top(); pq.pop();

        while(!pq.empty())
        {
            int curr=pq.top(); pq.pop();
            if(prev==curr) continue;
            if(prev+1==curr) count++;
            else count=0;
            result=max(result,count);
            prev=curr;
        }
        return result+1;
    }
}; 

class Solution {
public:
//method -2
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0) return 0;
        int result=0;
        int count=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]==nums[i]) continue;
            if(nums[i-1]+1==nums[i]) count++;
            else count=0;
            result=max(count,result);
        }
        return result+1;
    }
};