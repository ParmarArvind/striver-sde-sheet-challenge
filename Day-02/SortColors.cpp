// TC: O(N) (Two Pass)
// SC: O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0;
        int ones=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) zero++;
            else if(nums[i]==1) ones++;
        }
        for(int i=0;i<n;i++)
        {
            if(zero) {
                zero--;
                nums[i]=0;
            }
            else if(ones) {
                ones--;
                nums[i]=1;
            }
            else nums[i]=2;
        }
        
    }
};


// TC: O(N) (One Pass)
// SC: O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();

        int left=0;
        int mid=0;
        int right=n-1;

        while(mid<=right)
        {
            if(nums[mid]==0){
                swap(nums[left],nums[mid]);
                left++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else{
                swap(nums[mid],nums[right]);
                right--;
            }
        }

    }
};