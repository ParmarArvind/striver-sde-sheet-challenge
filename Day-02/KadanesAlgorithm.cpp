//  TC: O(N)
//  SC: O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result=INT_MIN;
        int tempSum=0;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            tempSum+=nums[i];
            result=max(result,tempSum);
            if(tempSum<0) tempSum=0;
        }

        return result;
    }
};