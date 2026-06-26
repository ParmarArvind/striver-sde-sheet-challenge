class Solution {
public:
    //method -1 tc=n sc=n
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        unordered_set<int>st;
        int n=nums.size();
        for(int num:nums)
        {
            freq[num]++;
            if(freq[num]>n/3) st.insert(num);
        }
        vector<int>result;
        for(auto num:st)
        {
            result.push_back(num);
        }

        return result;
    }
};


class Solution {
public:
// method -2 tc=n*log(n) sc=(1)
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        int n=nums.size();

        vector<int>result;

        for(int i=0;i<n;i++)
        {
            if(i==0) count=1;
            else if(nums[i]==nums[i-1]) count++;
            else count=1;
            if(count>n/3){
                if(result.empty() )
                {
                    result.push_back(nums[i]);
                    count=0;
                }
                else if( result.back()!=nums[i]){
                    result.push_back(nums[i]);
                    count=0;
                }
            }
        }
        if(count>n/3){
            if(result.empty() )
            {
                result.push_back(nums[n-1]);
                count=0;
            }
            else if( result.back()!=nums[n-1]){
                result.push_back(nums[n-1]);
                count=0;
            }
        }
        return result;
    }
};


class Solution {
public:
// method -3 tc=n sc=(1)
    vector<int> majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        int count1=0, count2=0;
        int leader1=INT_MAX;
        int leader2=INT_MAX;

        for(int i=0;i<n;i++)
        {
           if(nums[i]==leader1) count1++;
           else if(nums[i]==leader2) count2++;
           else if(count1==0) 
           {
                leader1=nums[i];
                count1=1;
           }else if(count2==0) 
           {
                leader2=nums[i];
                count2=1;
           }else{
            count1--, count2--;
           }
        }
        // verification 
         count1=0;
         count2=0;
        for(int num:nums)
        {
            if(num==leader1) count1++;
           else if(num==leader2) count2++;
        }
        vector<int>result;
        if(count1>n/3) result.push_back(leader1);
        if(count2>n/3) result.push_back(leader2);
        return result;
    }

};