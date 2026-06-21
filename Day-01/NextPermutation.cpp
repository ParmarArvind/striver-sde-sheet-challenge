class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int firstIdx =-1;
        for(int i=n-2; i>=0; i--)
        {
            if(nums[i]<nums[i+1])
            {
                firstIdx=i;  break;
            }
        }

        if(firstIdx==-1) 
        {
            reverse(nums.begin(),nums.end());
            return ;
        }
        // find the second ele that is larger than first 
        int second;
        for(int i=firstIdx+1; i<n; i++)
        {   
            if(nums[i] > nums[firstIdx] )
             {
                second=i;
            }
        }
        //swap(arr, first, second);
        int temp=nums[firstIdx];
        nums[firstIdx]=nums[second];
        nums[second]=temp;

         // reverse the array after pivot
        reverse(nums.begin() + firstIdx + 1, nums.end());
    }
};