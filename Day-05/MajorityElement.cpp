class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums) freq[num]++;

        int n=nums.size();
        for(auto it:freq)
        {
            if(it.second>n/2) return it.first;
        }
        return -1;
        
    }
};

class Solution {
public:
    // method -2  tc=o(n) sc=o(1)
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int leader=nums[0];
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==leader) count++;
            else count--;

            if(count==0) {
                leader=nums[i];
                count=1;
            }
            
        }
        return leader;
        
    }
};