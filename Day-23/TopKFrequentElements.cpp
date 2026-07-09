class Solution {
public:
    // TC=O(n*log(k))
    // SC=O(n) +O(k)
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int num:nums) freq[num]++;

        // min heap of size k
        priority_queue<pair<int,int> ,vector<pair<int,int>> ,greater<pair<int,int>>>pq;
        for(auto &it:freq)
        {
            pq.push({it.second,it.first});
            if(pq.size()>k) pq.pop();
        }

        vector<int>result;
        while(!pq.empty() ){
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};