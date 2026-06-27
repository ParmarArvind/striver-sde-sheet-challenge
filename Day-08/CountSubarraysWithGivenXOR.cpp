class Solution {
public:
    long subarrayXor(vector<int> &arr, int target) {

        unordered_map<int, int> mp;
        mp[0] = 1;

        int preXor = 0;
        long long count = 0;

        for (int x : arr) {
            preXor ^= x;

            int needed = preXor ^ target;

            if (mp.find(needed) != mp.end())
                count += mp[needed];

            mp[preXor]++;
        }

        return count;
    }
};