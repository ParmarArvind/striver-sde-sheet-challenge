class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int result=0;
        int i=0;
        while(i<nums.size()){
            if( nums[i] == 1 ) count++;
            else count=0;
            result=max(count,result);
            i++;
        }

        return result;
    }
};