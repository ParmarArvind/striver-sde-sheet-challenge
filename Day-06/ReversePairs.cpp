class Solution {
public:
    //method 1 tc=n(logn)^2 sc=n
    int merge(vector<int> &nums, int start,int mid,int end)
    {
        int count=0;
        vector<int>left;
        for(int i=start;i<=mid;i++) left.push_back(nums[i]);

        vector<int>right;
        for(int i=mid+1;i<=end;i++) right.push_back(nums[i]);

        for(int i=0;i<right.size();i++)
        {
            int j=0 , l=left.size()-1;
            long long target = 2LL * right[i];
            int idx=-1;
            while(j<=l)
            {
                int mid=j+(l-j)/2;
                if(left[mid]>target) {
                    idx=mid;
                    l=mid-1;
                }else j=mid+1;
            }
            if(idx!=-1) count += left.size() -idx;
        }
        vector<int>result;
        int i=0, j =0;
        while(i<=mid-start && j<end-mid)
        {
            if(left[i] <= right[j])
            {
                result.push_back(left[i]);
                i++;
            }else {
                result.push_back(right[j]);
                j++;
            }
        }
        while(i<=mid-start){
            result.push_back(left[i]);
            i++;
        } 
        while(j<end-mid) {
            result.push_back(right[j]);
            j++;
        }

        for(int i=start;i<=end;i++)
        {
            nums[i]=result[i-start];
        }
        return count;
    }
    int mergeSort(vector<int>&nums ,int start,int end )
    {
        int count=0;
        if(start>=end) return count;

        int mid= start+(end-start)/2;
        count += mergeSort(nums,start,mid);
        count += mergeSort(nums,mid+1,end);

        count+= merge(nums,start,mid,end);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
       return mergeSort(nums,0,n-1);
        
    }
};
 
//method 2 tc=nlogn sc=n
class Solution {
public:
    void merge(vector<int> &nums, int start,int mid,int end)
    {
        vector<int>left;
        for(int i=start;i<=mid;i++) left.push_back(nums[i]);

        vector<int>right;
        for(int i=mid+1;i<=end;i++) right.push_back(nums[i]);

        vector<int>result;
        int i=0, j =0;
        while(i<=mid-start && j<end-mid)
        {
            if(left[i] <= right[j])
            {
                result.push_back(left[i]);
                i++;
            }else {
                result.push_back(right[j]);
                j++;
            }
        }
        while(i<=mid-start){
            result.push_back(left[i]);
            i++;
        } 
        while(j<end-mid) {
            result.push_back(right[j]);
            j++;
        }

        for(int i=start;i<=end;i++)
        {
            nums[i]=result[i-start];
        }
        
    }
    int countPairs(vector<int>&nums ,int start,int mid,int end )
    {
        int count=0;
        int j=mid+1;
        for(int i=start;i<=mid;i++)
        {
            while(j<=end && nums[i]> 2LL*nums[j]) j++;
            count+= j -(mid+1);
        }
        return count;
    }
    int mergeSort(vector<int>&nums ,int start,int end )
    {
        int count=0;
        if(start>=end) return count;

        int mid= start+(end-start)/2;
        count += mergeSort(nums,start,mid);
        count += mergeSort(nums,mid+1,end);

        count+= countPairs(nums,start,mid,end);
        merge(nums,start,mid,end);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
       return mergeSort(nums,0,n-1);
        
    }
};