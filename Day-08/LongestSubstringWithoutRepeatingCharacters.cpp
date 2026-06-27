class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> freq(256, false);
        int i=0 , j=0;
        int result = 0;
        int n = s.size();

        while (j < n) {
            while (freq[s[j]]) {
                freq[s[i]] = false;
                i++;
            }
            freq[s[j]] = true;
            result = max(result, j - i + 1);
            j++;
        }

        return result;
    }
};