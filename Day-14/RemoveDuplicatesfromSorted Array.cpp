class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        int i=1;
        while(i<n)
        {
            if(nums[i]!=nums[k])
            {
                k++;
                nums[k]=nums[i];
            }
            i++;
            
        }
        return k+1;
    }
};