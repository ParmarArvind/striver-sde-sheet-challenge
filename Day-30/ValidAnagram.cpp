class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size() ) return false;
        vector<int>arr1(26,0);
        vector<int>arr2(26,0);

        for(char ch:s) arr1[ch-'a']++;
        for(char ch:t) arr2[ch-'a']++;

        for(int i=0;i<26;i++) if(arr1[i]!=arr2[i]) return false;
        return true;
        
    }
};

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.size()!=t.size() ) return false;

//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());

//         return s==t;
//     }
// };