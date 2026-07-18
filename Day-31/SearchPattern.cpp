class Solution {
  public:
    void findLPS(string &pat ,vector<int>&lps)
    {
        int m=pat.size();
        int left=0;
        int right=1;
        while(right<m)
        {
            if(pat[left]==pat[right])
            {
                lps[right]=left+1;
                right++;
                left++;
            }
            else{
                if(left==0) right++;
                else {
                    left=lps[left-1];
                }
            }
        }
    }
    vector<int> search(string &pat, string &txt) {
        // code here
        int n=txt.size();
        int m=pat.size();
        
        vector<int>lps(m,0);
        findLPS(pat,lps);
        
        vector<int>result;
        
        int first=0;
        int second=0;
        
        while(first<n )
        {
            if(txt[first]==pat[second])
            {
                second++;
                first++;
            }
            else{
                if(second==0) first++;
                else  second=lps[second-1];
            }
            
            if(second==m)
            {
                result.push_back(first-second);
                second=lps[second-1];
            }
        }
        
        return result;
        
    }
};